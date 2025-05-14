#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;
    std::string isbn;

public:
    Book(std::string title, std::string author, int year, std::string isbn);

    void display() const;

    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
};

#endif
