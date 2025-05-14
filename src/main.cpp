#include <iostream>
#include <limits>
#include "Library.h"
#include "Book.h"

void showMenu() {
    std::cout << "\n--- Library Menu ---\n";
    std::cout << "1. Add Book\n";
    std::cout << "2. Remove Book\n";
    std::cout << "3. Search Book by Title\n";
    std::cout << "4. List All Books\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose an option (1-5): ";
}

int main() {
    Library library;
    int choice;

    while (true) {
        showMenu();
        std::cin >> choice;

        // Prevent input failure (e.g., entering letters)
        if (std::cin.fail()) {
            std::cin.clear(); // clear error flags
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard bad input
            std::cout << "Invalid input. Please enter a number from 1 to 5.\n";
            continue;
        }

        std::cin.ignore(); // discard newline character

        if (choice == 1) {
            std::string title, author, isbn;
            int year;

            std::cout << "Enter title: ";
            std::getline(std::cin, title);
            std::cout << "Enter author: ";
            std::getline(std::cin, author);
            std::cout << "Enter year: ";
            std::cin >> year;
            std::cin.ignore();
            std::cout << "Enter ISBN: ";
            std::getline(std::cin, isbn);

            Book book(title, author, year, isbn);
            library.addBook(book);
        }

        else if (choice == 2) {
            std::string isbn;
            std::cout << "Enter ISBN to remove: ";
            std::getline(std::cin, isbn);
            library.removeBook(isbn);
        }

        else if (choice == 3) {
            std::string title;
            std::cout << "Enter title to search: ";
            std::getline(std::cin, title);
            library.searchByTitle(title);
        }

        else if (choice == 4) {
            library.listBooks();
        }

        else if (choice == 5) {
            std::cout << "Goodbye!\n";
            break;
        }

        else {
            std::cout << "Invalid choice. Please choose between 1 and 5.\n";
        }
    }

    return 0;
}
