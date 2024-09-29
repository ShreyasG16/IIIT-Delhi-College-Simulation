#ifndef LIBRARYITEM_H
#define LIBRARYITEM_H

#include <iostream>
#include <string>
using namespace std;

class LibraryItem {
public:
    virtual void printDetails() const = 0; // Pure virtual function for printing details
    virtual ~LibraryItem() {} // Virtual destructor
};

#endif // LIBRARYITEM_H