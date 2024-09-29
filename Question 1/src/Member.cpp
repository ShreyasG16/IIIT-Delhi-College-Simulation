#include "Member.h"

// Default constructor implementation
Member::Member() 
    : Person(""), designation(""), email(""), phone(""), room("") {} // Initialize all fields to empty

// Parameterized constructor implementation
Member::Member(const std::string& name, const std::string& designation, const std::string& email, const std::string& phone, const std::string& room)
    : Person(name), designation(designation), email(email), phone(phone), room(room) {}

// The following methods do not need to be updated as they deal with Member-specific data
std::string Member::getDesignation() const { return designation; }
std::string Member::getEmail() const { return email; }
std::string Member::getPhone() const { return phone; }
std::string Member::getRoom() const { return room; }
