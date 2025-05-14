#ifndef LIBRARY_H
#define LIBRARY_H

#include "Book.h"
#include <vector>
#include <string>

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    void removeBook(const std::string& isbn);
    void searchByTitle(const std::string& title) const;
    void listBooks() const;
};

#endif
