#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    int id;
    std::string title;
    std::string author;
    int year;
    std::string isbn;

public:
    // Updated constructor: accepts int for id, string for isbn
    Book(int id, std::string title, std::string author, int year, std::string isbn);
    
    void display() const;
    
    int getId() const;
    std::string getISBN() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
};

#endif
