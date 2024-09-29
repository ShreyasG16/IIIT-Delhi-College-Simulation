#ifndef PUBLICATIONRANK_H
#define PUBLICATIONRANK_H

#include <iostream>
#include <string>
#include "LibraryItem.h"

using namespace std;

class PublicationRank : public LibraryItem {
private:
    int ID;
    string publication;
    int rank; // Ensure this variable is declared
    double totalPaid;
    bool borrowed;

public:
    // Constructor
    PublicationRank(int ID, const string &publication, int rank, double totalPaid);
    
    // Getter methods
    int getID() const;
    string getPublication() const;
    int getRank() const; // Ensure this method is declared correctly
    double getTotalPaid() const;

    bool isBorrowed() const;
    void setBorrowed(bool status);

    void printDetails() const override; // Ensure this overrides the base class method
};

#endif // PUBLICATIONRANK_H