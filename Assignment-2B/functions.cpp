#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
using namespace std;

bool isNumeric(const string &str)
{
    for (char c : str)
    {
        if (!isdigit(c))
        {
            return false;
        }
    }
    return true;
}

// Function to split a CSV line into fields based on commas
void splitCSVLine(const std::string &line, std::string fields[], int fieldCount);

void splitLine(const std::string &line, std::string fields[], int fieldCount);

void splitString(const string &input, string fields[], int fieldCount)
{
    istringstream ss(input);
    string field;
    int index = 0;

    while (index < fieldCount && getline(ss, field, ','))
    {
        fields[index++] = field;
    }

    while (index < fieldCount)
    {
        fields[index++] = ""; // Fill remaining fields with empty strings
    }
}

bool isValidUserName(const std::string &userName);

string getField(const string& line, int fieldIndex) {
    string field;
    istringstream ss(line);
    string token;

    for (int i = 0; i <= fieldIndex; i++) {
        if (!std::getline(ss, token, ',')) {
            break;  // Handle incomplete lines
        }

        // Remove quotes if the field is enclosed in them
        if (!token.empty() && token.front() == '"' && token.back() == '"') {
            token = token.substr(1, token.length() - 2);
        }

        if (i == fieldIndex) {
            field = token;
        }
    }

    return field;
}

