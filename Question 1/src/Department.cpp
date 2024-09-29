#include "Department.h"
#include <iostream>
#include "Utils.h" // Include Utils for trim function

// Default constructor implementation
Department::Department() : name(""), memberCount(0) {}

// Constructor with department name implementation
Department::Department(const std::string& name) : name(name), memberCount(0) {}

bool Department::addMember(const Member& member) {
    if (memberCount < 100) { // Check if there is space in the array for more members
        members[memberCount++] = member; // Add member and increment count
        return true;
    }
    return false; // No space available for new member
}

void Department::listMembers() const {
    std::cout << "Members of " << name << ":\n";
    for (int i = 0; i < memberCount; ++i) {
        std::cout << "- " << members[i].getName()
                  << ", Designation: " << members[i].getDesignation()
                  << ", Email: " << members[i].getEmail()
                  << ", Phone: " << members[i].getPhone()
                  << ", Room: " << members[i].getRoom() << "\n";
    }
}

bool Department::findMember(const std::string& name, Member& member) const {
    for (int i = 0; i < memberCount; ++i) {
        std::cout << "Comparing with: '" << members[i].getName() << "'" << std::endl; // Debug output
        if (trim(members[i].getName()) == trim(name)) { // Compare trimmed names
            member = members[i]; // Assign found member to the reference parameter
            return true; // Found the member
        }
    }
    return false; // Not found
}

// Method to get the count of current members in the department
int Department::getMemberCount() const {
    return memberCount; // Return current count of members
}