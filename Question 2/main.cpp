#include "include/Utils.h"
#include "include/Department.h"
#include <iostream>
#include <string>

int main() {
    Member members[20];
    int memberCount = 0;

    loadMembersFromCSV("Academic_Data.csv", members, memberCount);

    Department trainingAndPlacement("Training and Placement");
    Department rnd("Research and Development");
    Department it("IT Technical Department");

    for (int i = 0; i < memberCount; i++) {
        if (members[i].getDepartment() == "Training and Placement") {
            trainingAndPlacement.addMember(members[i]);
        } else if (members[i].getDepartment() == "Research and Development") {
            rnd.addMember(members[i]);
        } else if (members[i].getDepartment() == "IT Technical Department") {
            it.addMember(members[i]);
        }
    }


    std::cout << "Available Departments:\n";
    std::cout << "1. Training and Placement\n";
    std::cout << "2. Research and Development\n";
    std::cout << "3. IT Technical Department\n";
    std::cout << "Enter the name of the person to fetch details: ";
    
    std::string queryName;
    std::getline(std::cin, queryName);

    bool found = false;
    for (int i = 0; i < memberCount; i++) {
        if (members[i].getName() == queryName) {
            std::cout << "Name: " << members[i].getName() << "\n";
            std::cout << "Department: " << members[i].getDepartment() << "\n";
            std::cout << "Department Head: ";

            if(members[i].getDepartment()=="Training and Placement")
            {
               std::cout<<"Rashmil Mishra"<<"\n";
            }
            else if(members[i].getDepartment()=="Research and Development")
            {
               std::cout<<"Rubina Thakur"<<"\n";
            }
            else if(members[i].getDepartment()=="IT Technical Department")
            {
               std::cout<<"Abhinay Saxena"<<"\n";
            }

            std::cout << "Designation: " << members[i].getDesignation() << "\n";
            std::cout << "Phone: " << members[i].getPhone() << "\n";
            std::cout << "Room: " << members[i].getRoom() << "\n";
            std::cout << "Email: " << members[i].getEmail() << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "No details found for the name: " << queryName << "\n";
    }

    return 0;
}
