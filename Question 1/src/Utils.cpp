#include "Utils.h"
#include <algorithm>
#include <cctype>

// Function to trim whitespace from both ends of a string
std::string trim(const std::string& str) {
    auto start = str.begin();
    while (start != str.end() && std::isspace(*start)) ++start;

    auto end = str.end();
    do { --end; } while (end != start && std::isspace(*end));

    return std::string(start, end + 1);
}