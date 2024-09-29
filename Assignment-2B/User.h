#ifndef USER_H
#define USER_H

#include <string>
#include <ctime>
#include "Book.h"            // Include Book header for type definition
#include "PublicationRank.h" // Include PublicationRank header for type definition
#include "Journals.h"       
#include <iostream>
using namespace std;

class User {
private:
    string name; // User's name
    bool isTeacher; // Flag to indicate if the user is a teacher
    static const int MAX_BORROWED_BOOKS = 3; // Maximum number of books a user can borrow
    int borrowedCount; // Count of currently borrowed books

public:
    Book *borrowedBooks[MAX_BORROWED_BOOKS]; // Array to hold borrowed books
    PublicationRank *borrowedbooks[MAX_BORROWED_BOOKS]; // Array to hold borrowed publications
    Journals *borrowedJournals[MAX_BORROWED_BOOKS]; // Array to hold borrowed journals
    time_t borrowedDates[MAX_BORROWED_BOOKS]; // Array to hold dates of borrowing

    User(); // Default constructor
    User(const string &name, bool isTeacher); // Parameterized constructor

    string getName() const; // Get user's name
    bool isTeacherUser() const; // Check if the user is a teacher
    int getBorrowedCount() const; // Get count of borrowed books
    int getMaxBorrowedBooks() const; // Get maximum number of books that can be borrowed
    void incrementBorrowedCount(); // Increment borrowed count

    bool isBookBorrowed(Book *book) const; // Check if a book is borrowed by the user
    bool canBorrowMoreBooks() const; // Check if the user can borrow more books

    time_t getLastBorrowTime(const Book *book) const; // Get last borrow time for a specific book
    void setLastBorrowTime(const Book *book, time_t borrowTime); // Set last borrow time for a specific book

    time_t getLastBorrowPubTime(const PublicationRank *publicationRank) const; // Get last borrow time for a publication
    void setLastBorrowPubTime(const PublicationRank *publicationRank, time_t borrowTime); // Set last borrow time for a publication
};

#endif // USER_H