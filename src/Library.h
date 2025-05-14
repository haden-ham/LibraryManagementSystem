#pragma once
#include "Book.h"
#include <vector>

class Library {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book);
    void listBooks() const;
    const Book* findBookById(int id) const;
    bool removeBook(int id);
};
