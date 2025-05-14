#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::listBooks() const {
    if (books.empty()) {
        std::cout << "No books in the library.\n";
        return;
    }

    for (const Book& book : books) {
        book.display();
        std::cout << "---------------------\n";
    }
}

const Book* Library::findBookById(int id) const {  // Change from findBookByISBN
    for (const Book& book : books) {
        if (book.getId() == id) {
            return &book;
        }
    }
    return nullptr;
}

bool Library::removeBook(int id) {  // Change from removeBook(std::string isbn)
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getId() == id) {
            books.erase(it);
            return true;
        }
    }
    return false;
}
