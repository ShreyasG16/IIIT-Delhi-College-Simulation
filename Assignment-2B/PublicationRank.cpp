#include "PublicationRank.h"

// Constructor implementation
PublicationRank::PublicationRank(int ID, const string &publication, int rank, double totalPaid)
    : ID(ID), publication(publication), rank(rank), totalPaid(totalPaid), borrowed(false) {}

// Getter for ID
int PublicationRank::getID() const {
    return ID;
}

// Getter for publication
string PublicationRank::getPublication() const {
    return publication;
}

// Correctly named getter for rank
int PublicationRank::getRank() const { // Change from getrank to getRank
    return rank; // Return the rank
}

// Getter for totalPaid
double PublicationRank::getTotalPaid() const {
    return totalPaid;
}

// Check if borrowed
bool PublicationRank::isBorrowed() const {
    return borrowed;
}

// Set borrowed status
void PublicationRank::setBorrowed(bool status) {
    borrowed = status;
}

// Print details implementation
void PublicationRank::printDetails() const {
    cout << "ID: " << ID 
         << "\nPublication Name: " << publication 
         << "\nRank: " << rank 
         << "\nTotal Paid: " << totalPaid 
         << "\n";
}