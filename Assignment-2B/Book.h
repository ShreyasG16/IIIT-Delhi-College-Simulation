#ifndef BOOK_H
#define BOOK_H

#include <string>
#include "LibraryItem.h" // Ensure this exists

class Book : public LibraryItem {
private:
    int ID;
    int book_id;
    int isbn;
    std::string title;
    std::string authors;
    int original_publication_year;
    bool borrowed;

public:
    // Constructors
    Book();
    Book(int ID, int book_id, int isbn, const std::string &title, const std::string &authors, int original_publication_year);

    // Getter functions
    int getID() const;
    int getBookID() const;
    int getISBN() const;
    std::string getTitle() const;
    std::string getAuthors() const;
    int getPublicationYear() const;
    bool isBorrowed() const;

    // Setter functions
    void setID(int id);
    void setBookID(int bookid);
    void setISBN(int Isbn);
    void setTitle(const std::string &newTitle);
    void setAuthors(const std::string &newAuthor);
    void setPublicationYear(int year);
    void setBorrowed(bool status);

    // Print function
    void printDetails() const override; // Match LibraryItem interface
};

#endif // BOOK_H
