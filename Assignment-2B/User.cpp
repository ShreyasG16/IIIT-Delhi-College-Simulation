#include <iostream>
#include <string>
#include "User.h"
#include "Book.h"
#include "PublicationRank.h"
#include "Journals.h"
using namespace std;

// Constructor implementations
User::User() : name(""), isTeacher(false), borrowedCount(0)
{
    for (int i = 0; i < MAX_BORROWED_BOOKS; ++i)
    {
        borrowedBooks[i] = nullptr;
        borrowedbooks[i] = nullptr;
        borrowedJournals[i] = nullptr;
    }
}

User::User(const string &name, bool isTeacher) : name(name), isTeacher(isTeacher), borrowedCount(0)
{
    for (int i = 0; i < MAX_BORROWED_BOOKS; ++i)
    {
        borrowedBooks[i] = nullptr;
        borrowedbooks[i] = nullptr;
        borrowedJournals[i] = nullptr;
    }
}

// Member function implementations
string User::getName() const
{
    return name;
}

bool User::isTeacherUser() const
{
    return isTeacher;
}

int User::getBorrowedCount() const
{
    return borrowedCount;
}

int User::getMaxBorrowedBooks() const
{
    return MAX_BORROWED_BOOKS;
}

void User::incrementBorrowedCount()
{
    borrowedCount++;
}

bool User::isBookBorrowed(Book *book) const
{
    for (int i = 0; i < MAX_BORROWED_BOOKS; ++i)
    {
        if (borrowedBooks[i] == book)
        {
            return true;
        }
    }
    return false;
}

bool User::canBorrowMoreBooks() const
{
    return getBorrowedCount() < MAX_BORROWED_BOOKS;
}

time_t User::getLastBorrowTime(const Book *book) const
{
    for (int i = 0; i < MAX_BORROWED_BOOKS; ++i)
    {
        if (borrowedBooks[i] == book)
        {
            return borrowedDates[i];
        }
    }
    return 0;
}

void User::setLastBorrowTime(const Book *book, time_t borrowTime)
{
    for (int i = 0; i < MAX_BORROWED_BOOKS; ++i)
    {
        if (borrowedBooks[i] == book)
        {
            borrowedDates[i] = borrowTime;
            return;
        }
    }
}

time_t User::getLastBorrowPubTime(const PublicationRank *publicationRank) const
{
    for (int i = 0; i < MAX_BORROWED_BOOKS; ++i)
    {
        if (borrowedbooks[i] == publicationRank)
        {
            return borrowedDates[i];
        }
    }
    return 0;
}

void User::setLastBorrowPubTime(const PublicationRank *publicationRank, time_t borrowTime)
{
    for (int i = 0; i < MAX_BORROWED_BOOKS; ++i)
    {
        if (borrowedbooks[i] == publicationRank)
        {
            borrowedDates[i] = borrowTime;
            return;
        }
    }
}
