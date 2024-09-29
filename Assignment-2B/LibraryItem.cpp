#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <ctime>
#include <cstring>
#include <cctype>
#include <limits>
#include <chrono>
#include <thread>
#include <iomanip>
#include "globals.h"
using namespace std;

int ID = 1; // Initialize global ID variable.

class LibraryItem
{
public:
    virtual void printDetails() const = 0;
    virtual ~LibraryItem() {}
};



