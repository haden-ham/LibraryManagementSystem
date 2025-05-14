#include "Book.h"
#include <iostream>  // Add this header for std::cout and std::endl

// Updated constructor definition: accepts int for id, string for isbn
Book::Book(int id, std::string title, std::string author, int year, std::string isbn) 
    : id(id), title(title), author(author), year(year), isbn(isbn) {}

void Book::display() const {
    std::cout << "ID: " << id << ", Title: " << title << ", Author: " << author 
              << ", Year: " << year << ", ISBN: " << isbn << std::endl;
}

int Book::getId() const {
    return id;
}

std::string Book::getISBN() const {
    return isbn;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}
