#include "Book.h"
#include <iostream>

Book::Book(std::string t, std::string a, int y, std::string i)
    : title(t), author(a), year(y), isbn(i) {}

void Book::display() const {
    std::cout << "Title: " << title << "\n"
              << "Author: " << author << "\n"
              << "Year: " << year << "\n"
              << "ISBN: " << isbn << "\n\n";
}

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getISBN() const { return isbn; }
