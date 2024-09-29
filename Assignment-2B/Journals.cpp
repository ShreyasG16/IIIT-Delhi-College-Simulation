#include <iostream>
#include <string>
#include "Journals.h" // Correctly include Journals.h
using namespace std;

// Constructor
Journals::Journals(int ID, const string &title)
    : ID(ID), title(title) {}

// Getter function implementations
int Journals::getID() const {
    return ID;
}

string Journals::getTitle() const {
    return title;
}

void Journals::printDetails() const {
    cout << "ID: " << ID << "\nJournal Title: " << title << "\n";
}
