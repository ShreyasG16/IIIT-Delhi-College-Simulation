#include <iostream>
#include <string>
#include "Library.h"
#include "LibraryItem.h"
#include "User.h"
#include "globals.h"
#include "Book.h"
#include "PublicationRank.h"
#include "Journals.h"

using namespace std;

// Constructor
Library::Library() : itemCount(0), nextBookId(100), studentCount(0), teacherCount(0) {}

// Add an item to the library
void Library::addItem(LibraryItem *item) {
    if (itemCount < MAX_ITEMS) {
        libraryItems[itemCount++] = item;
    } else {
        cout << "Library is full. Cannot add more items." << endl;
    }
}

// Print all items in the library
void Library::printAllItems() const {
    for (int i = 0; i < itemCount; ++i) {
        if (libraryItems[i]) {
            libraryItems[i]->printDetails();
            cout << "------------------------\n";
        }
    }
}

// Get book by ID
Book *Library::getBookByID(int bookID) const {
    for (int i = 0; i < itemCount; i++) {
        Book *book = dynamic_cast<Book *>(libraryItems[i]);
        if (book && book->getBookID() == bookID) {
            return book; // Found the book with the specified ID
        }
    }
    return nullptr; // Book with the specified ID not found
}

// Get book by ISBN
Book *Library::getBookByIsbn(int bookIsbn) const {
    for (int i = 0; i < itemCount; i++) {
        Book *book = dynamic_cast<Book *>(libraryItems[i]);
        if (book && book->getISBN() == bookIsbn) {
            return book; // Found the book with the specified ISBN
        }
    }
    return nullptr; // Book with the specified ISBN not found
}

// Register a user
void Library::registerUser(const std::string &name, bool isTeacher) {
    if (isTeacher) {
        teachers[teacherCount++] = User(name, true);
        cout << "Registered as a Teacher." << endl;
    } else {
        students[studentCount++] = User(name, false);
        cout << "Registered as a Student." << endl;
    }
    cout << "-------------------------" << endl;
}

// Show all registered users
void Library::showAllRegisteredUsers() const {
    cout << "Registered Students:" << endl;
    for (int i = 0; i < studentCount; ++i) {
        cout << students[i].getName() << endl;
    }

    cout << "Registered Teachers:" << endl;
    for (int i = 0; i < teacherCount; ++i) {
        cout << teachers[i].getName() << endl;
    }
}

bool Library::borrowBook(const std::string &userName, int bookIdToBorrow) {
    // Check if the user is registered (either student or teacher)
    bool isRegistered = false;
    // Check if the user is a registered student
    for (int i = 0; i < studentCount; ++i) {
        if (students[i].getName() == userName) {
            isRegistered = true;
            break;
        }
    }
    // Check if the user is a registered teacher
    for (int i = 0; i < teacherCount; ++i) {
        if (teachers[i].getName() == userName) {
            isRegistered = true;
            break;
        }
    }

    // If the user is not registered, prompt for registration
    if (!isRegistered) {
        char choice;
        cout << userName << ", you are not registered. Would you like to register? (Y/N): ";
        cin >> choice;
        if (choice == 'Y' || choice == 'y') {
            bool isTeacher;
            cout << "Are you a teacher? (Y/N): ";
            cin >> choice;
            isTeacher = (choice == 'Y' || choice == 'y');

            // Register the user as a student or teacher
            registerUser(userName, isTeacher);
            isRegistered = true;
            cout << userName << " has been successfully registered." << endl;
        } else {
            cout << "You must register to borrow books." << endl;
            return false; // End the borrowing process
        }
    }

    // Proceed with borrowing logic if user is registered
    Book *book = getBookByIsbn(bookIdToBorrow);
    if (book == nullptr) {
        cout << "Book not found!" << endl;
        return false; // Book not found
    }

    if (book->isBorrowed()) {
        cout << "Book is already borrowed!" << endl;
        return false; // Book is already borrowed
    }

    book->setBorrowed(true); // Mark the book as borrowed
    cout << userName << " has borrowed the book: " << book->getTitle() << endl;
    return true; // Successfully borrowed
}



bool Library::borrowPublication(const std::string &userName, int publication) {
    // Implement your logic for borrowing a publication here
    cout << userName << " has borrowed the publication with ID: " << publication << endl;
    return true; // Assuming the borrowing was successful
}

// Add a new book
void Library::addBook(int isbn, const std::string &author, const std::string &title, int originalPublicationYear) {
    if (itemCount < MAX_ITEMS) {
        libraryItems[itemCount++] = new Book(nextBookId, nextBookId, isbn, title, author, originalPublicationYear);
        cout << "Book added: " << title << endl;
        nextBookId++;
    } else {
        cout << "Library is full. Cannot add more books." << endl;
    }
}

// Borrow a journal
bool Library::borrowJournal(const std::string &userName, int journalID) {
    for (int i = 0; i < itemCount; ++i) {
        Journals *journal = dynamic_cast<Journals *>(libraryItems[i]);
        if (journal && journal->getID() == journalID) {
            cout << userName << " has borrowed the journal: " << journal->getTitle() << endl;
            return true; // Assuming the borrowing was successful
        }
    }
    cout << "Journal not found!" << endl;
    return false; // Journal not found
}

// Destructor
Library::~Library() {
    for (int i = 0; i < itemCount; ++i) {
        delete libraryItems[i]; // Free dynamically allocated memory for library items
    }
}



