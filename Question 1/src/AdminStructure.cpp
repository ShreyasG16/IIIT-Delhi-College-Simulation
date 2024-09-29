#include "AdminStructure.h"
#include <iostream>

AdminStructure::AdminStructure() : departmentCount(0) {}

bool AdminStructure::addDepartment(const Department& department) {
    if (departmentCount < 5) 
    { 
        departments[departmentCount++] = department;
        return true;
    }
    return false; 
}

void AdminStructure::displayDepartments() const 
{
    for (int i = 0; i < departmentCount; ++i) {
        departments[i].listMembers(); 
    }
}

bool AdminStructure::fetchDetailsByName(const std::string& name) const {
    Member foundMember("", "", "", "", "");
    
    for (int i = 0; i < departmentCount; ++i) {
        if (departments[i].findMember(name, foundMember))
        { 
            std::cout << "Name: " << foundMember.getName() 
                      << ", Designation: " << foundMember.getDesignation()
                      << ", Email: " << foundMember.getEmail()
                      << ", Phone Number: " << foundMember.getPhone()
                      << ", Room Number: " << foundMember.getRoom() 
                      << "\n";
            return true; 
        }
    }

    std::cout << "No details found for: " << name << "\n";
    return false;
}