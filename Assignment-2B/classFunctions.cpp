#include <iostream>
#include <string>
#include <thread> // Include for std::thread
#include "Book.h"            // Include the Book class
#include "PublicationRank.h" // Include the PublicationRank class
#include "Journals.h"       // Include the Journals class
#include "Library.h"        // Include the Library class
#include "User.h"           // Include the User class
#include "globals.h"        // Include global variables

using namespace std;

// Function to search books by author
void Library::searchBooksByAuthor(const string &bookAuthor, Book *matchingBooks[], int &matchingCount) {
    matchingCount = 0;
    string searchAuthorLower = bookAuthor;
    for (char &c : searchAuthorLower) c = tolower(c);
    
    for (int i = 0; i < itemCount; i++) {
        Book *book = dynamic_cast<Book *>(libraryItems[i]);
        if (book) {
            string bookAuthorLower = book->getAuthors();
            for (char &c : bookAuthorLower) c = tolower(c);
            if (bookAuthorLower.find(searchAuthorLower) != string::npos) {
                matchingBooks[matchingCount++] = book; // Found a book with a matching author name
            }
        }
    }
}

// Function to search books by title
void Library::searchBooksByTitle(const string &bookTitle, Book *matchingBooks[], int &matchingCount) {
    matchingCount = 0;
    string searchTitleLower = bookTitle;
    for (char &c : searchTitleLower) c = tolower(c);
    
    for (int i = 0; i < itemCount; i++) {
        Book *book = dynamic_cast<Book *>(libraryItems[i]);
        if (book) {
            string bookTitleLower = book->getTitle();
            for (char &c : bookTitleLower) c = tolower(c);
            if (bookTitleLower.find(searchTitleLower) != string::npos) {
                matchingBooks[matchingCount++] = book; // Found a book with a matching title
            }
        }
    }
}

// Function to search publications
void Library::searchPublication(const string &publicationName, PublicationRank *matchingBooks[], int &matchingCount) {
    matchingCount = 0;
    string searchPublicationLower = publicationName;
    for (char &c : searchPublicationLower) c = tolower(c);
    
    for (int i = 0; i < itemCount; i++) {
        PublicationRank *publicationRank = dynamic_cast<PublicationRank *>(libraryItems[i]);
        if (publicationRank) {
            string publicationNameLower = publicationRank->getPublication();
            for (char &c : publicationNameLower) c = tolower(c);
            if (publicationNameLower.find(searchPublicationLower) != string::npos) {
                matchingBooks[matchingCount++] = publicationRank; // Found a publication with a matching name
            }
        }
    }
}

// Function to search journals
void Library::searchJournal(const string &journalTitle, Journals *matchingBooks[], int &matchingCount) {
    matchingCount = 0;
    string searchJournalLower = journalTitle;
    for (char &c : searchJournalLower) c = tolower(c);
    
    for (int i = 0; i < itemCount; i++) {
        Journals *journal = dynamic_cast<Journals *>(libraryItems[i]);
        if (journal) {
            string journalTitleLower = journal->getTitle();
            for (char &c : journalTitleLower) c = tolower(c);
            if (journalTitleLower.find(searchJournalLower) != string::npos) {
                matchingBooks[matchingCount++] = journal; // Found a journal with a matching title
            }
        }
    }
}

// Other functions like borrowBook, returnBook, etc., should also be included here
