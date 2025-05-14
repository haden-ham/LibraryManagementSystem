#include "Library.h"
#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
    std::cout << "Book added successfully.\n";
}

void Library::removeBook(const std::string& isbn) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if (it->getISBN() == isbn) {
            books.erase(it);
            std::cout << "Book removed.\n";
            return;
        }
    }
    std::cout << "Book with ISBN " << isbn << " not found.\n";
}

void Library::searchByTitle(const std::string& title) const {
    bool found = false;
    for (const auto& book : books) {
        if (book.getTitle().find(title) != std::string::npos) {
            book.display();
            found = true;
        }
    }
    if (!found) {
        std::cout << "No books found with title containing: " << title << "\n";
    }
}

void Library::listBooks() const {
    if (books.empty()) {
        std::cout << "Library is empty.\n";
    } else {
        for (const auto& book : books) {
            book.display();
        }
    }
}
