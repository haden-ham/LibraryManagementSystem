#include <iostream>
#include "Library.h"

int main() {
    Library library;
    int choice;

    while (true) {
        std::cout << "\n=== Library Menu ===\n";
        std::cout << "1. Add Book\n";
        std::cout << "2. List Books\n";
        std::cout << "3. Find Book by ID\n";
        std::cout << "4. Remove Book by ID\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input. Try again.\n";
            continue;
        }

        if (choice == 1) {
            int id, year;
            std::string title, author, isbn;

            std::cin.ignore(); // clear newline

            std::cout << "Enter Book ID: ";
            std::cin >> id;
            std::cin.ignore();

            std::cout << "Enter Title: ";
            std::getline(std::cin, title);

            std::cout << "Enter Author: ";
            std::getline(std::cin, author);

            std::cout << "Enter Publication Year: ";
            std::cin >> year;
            std::cin.ignore();

            std::cout << "Enter ISBN: ";
            std::getline(std::cin, isbn);

            Book newBook(id, title, author, year, isbn); // Now passing id as int
            library.addBook(newBook);
            std::cout << "Book added.\n";

        } else if (choice == 2) {
            library.listBooks();

        } else if (choice == 3) {
            int id;
            std::cout << "Enter Book ID to find: ";
            std::cin >> id;
            const Book* book = library.findBookById(id);
            if (book) {
                std::cout << "Book found:\n";
                book->display();
            } else {
                std::cout << "Book not found.\n";
            }

        } else if (choice == 4) {
            int id;
            std::cout << "Enter Book ID to remove: ";
            std::cin >> id;
            if (library.removeBook(id)) {
                std::cout << "Book removed.\n";
            } else {
                std::cout << "Book not found.\n";
            }

        } else if (choice == 5) {
            std::cout << "Goodbye!\n";
            break;

        } else {
            std::cout << "Invalid option.\n";
        }
    }

    return 0;
}
