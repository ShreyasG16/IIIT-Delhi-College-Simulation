#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
#include "LibraryItem.h"
#include "User.h"
#include "globals.h"
#include "Book.h"
#include "PublicationRank.h"
#include "Journals.h"

class Library {
private:
    LibraryItem *libraryItems[MAX_ITEMS]; // Array to hold library items
    int itemCount; // Current number of items in the library
    int nextBookId; // ID for the next book to be added
    User students[100]; // Array for student users
    int studentCount; // Number of registered students
    User teachers[50]; // Array for teacher users
    int teacherCount; // Number of registered teachers

public:
    Library(); // Constructor

    void addItem(LibraryItem *item); // Add an item to the library
    void printAllItems() const; // Print all items in the library
    void registerUser(const std::string &name, bool isTeacher); // Register a user
    void showAllRegisteredUsers() const; // Show all registered users
    Book *getBookByID(int bookID) const; // Get book by ID
    Book *getBookByIsbn(int bookIsbn) const; // Get book by ISBN
    void addBook(int isbn, const std::string &author, const std::string &title, int originalPublicationYear); // Add a new book
    bool borrowJournal(const std::string &userName, int journalID); // Borrow a journal

    void searchBooksByAuthor(const std::string &bookAuthor, Book *matchingBooks[], int &matchingCount);
    void searchBooksByTitle(const std::string &bookTitle, Book *matchingBooks[], int &matchingCount);
    void searchPublication(const std::string &publicationName, PublicationRank *matchingBooks[], int &matchingCount);
    void searchJournal(const std::string &journalTitle, Journals *matchingBooks[], int &matchingCount);

    bool borrowBook(const std::string &userName, int bookIdToBorrow);
    bool returnBook(Book *book);
    bool borrowPublication(const std::string &userName, int publication);
    bool returnPub(PublicationRank *publicationRank);
 

    bool isEqualIgnoreCase(const std::string &str1, const std::string &str2) const; // Compare two strings ignoring case

    virtual ~Library(); // Virtual destructor
};

#endif // LIBRARY_H
