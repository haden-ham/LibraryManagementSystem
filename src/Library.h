#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    void listBooks() const;
    const Book* findBookById(int id) const;  // Change from findBookByISBN
    bool removeBook(int id);  // Change from removeBook(std::string isbn)
};

#endif
