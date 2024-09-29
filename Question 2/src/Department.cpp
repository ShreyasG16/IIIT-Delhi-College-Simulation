#include "../include/Department.h"
#include <iostream>

Department::Department(const std::string& name) : departmentName(name), memberCount(0) {}

void Department::addMember(const Member& member) {
    if (memberCount < 5) {
        members[memberCount] = member;
        memberCount++;
    } else {
        std::cout << "Cannot add more members, department is full.\n";
    }
}

void Department::printDepartmentDetails() {
    std::cout << "Department: " << departmentName << "\n";
    for (int i = 0; i < memberCount; i++) {
        members[i].printDetails();
    }
}

void Department::printMemberPhones() {
    std::cout << "Phone numbers:\n";
    for (int i = 0; i < memberCount; i++) {
        std::cout << members[i].getPhone() << "\n";
    }
}

void Department::printMemberRooms() {
    std::cout << "Room numbers:\n";
    for (int i = 0; i < memberCount; i++) {
        std::cout << members[i].getRoom() << "\n";
    }
}
