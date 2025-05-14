#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::listBooks() const {
    if (books.empty()) {
        std::cout << "Library is empty.\n";
        return;
    }
    for (const Book& book : books) {
        book.display();
    }
}

const Book* Library::findBookById(int id) const {
    for (const Book& book : books) {
        if (book.getId() == id) {
            return &book;
        }
    }
    return nullptr;
}

bool Library::removeBook(int id) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getId() == id) {
            books.erase(it);
            return true;
        }
    }
    return false;
}
