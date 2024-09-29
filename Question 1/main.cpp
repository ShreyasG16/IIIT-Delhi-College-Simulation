#include <iostream>
#include <fstream>
#include <sstream>
#include "AdminStructure.h"
#include "Department.h"
#include "Member.h"
#include "Utils.h" // Include Utils header for trim function

int main() {
    AdminStructure admin;

    // Example departments based on the assignment description.
    Department irD("IRD");
    Department academics("Academics");

    // Read data from CSV file and populate departments and members.
    std::ifstream infile("data.csv");
    
    if (!infile.is_open()) {
        std::cerr << "Failed to open data file." << std::endl;
        return 1;
    }

    std::string line;

    // Skip header line from CSV file.
    getline(infile, line);

    while (getline(infile, line)) {
        std::stringstream ss(line);
        std::string name, designation, email, phone, room;

        getline(ss, name, ',');
        getline(ss, designation, ',');
        getline(ss, email, ',');
        getline(ss, phone, ',');
        getline(ss, room);

        // Trim whitespace from parsed values
        name = trim(name);
        designation = trim(designation);
        email = trim(email);
        phone = trim(phone);
        room = trim(room);

        // Debugging output for parsed values
        std::cout << "Parsed: Name: '" << name << "', Designation: '" 
                  << designation << "', Email: '" 
                  << email << "', Phone: '" 
                  << phone << "', Room: '" 
                  << room << "'" << std::endl;

        // Add members to respective departments based on their designations or other criteria.
        if (designation.find("Administrative") != std::string::npos || designation.find("Officer") != std::string::npos) {
            if (irD.addMember(Member(name, designation, email, phone, room))) {
                std::cout << "Added to IRD: " << name << std::endl; // Confirm addition
            } else {
                std::cerr << "Failed to add to IRD: " << name << std::endl; // Error handling
            }
        } else {
            if (academics.addMember(Member(name, designation, email, phone, room))) {
                std::cout << "Added to Academics: " << name << std::endl; // Confirm addition
            } else {
                std::cerr << "Failed to add to Academics: " << name << std::endl; // Error handling
            }
        }
    }

    admin.addDepartment(irD);
    admin.addDepartment(academics);

    infile.close();

    // Example of fetching details by name.
    std::string nameToFetch;

    std::cout << "Enter the name of the person to fetch details: ";
    getline(std::cin,nameToFetch);

    if (!admin.fetchDetailsByName(trim(nameToFetch))) { 
        std::cout << "Member not found." << std::endl;
    }

    return 0;
}