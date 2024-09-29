#include "../include/Member.h"
#include <iostream>

Member::Member() {}

Member::Member(std::string n, std::string d, std::string e, std::string p, std::string r, std::string dep)
    : name(n), designation(d), email(e), phone(p), room(r), department(dep) {}

std::string Member::getName() {
    return name;
}

std::string Member::getEmail() {
    return email;
}

std::string Member::getPhone() {
    return phone;
}

std::string Member::getRoom() {
    return room;
}

std::string Member::getDepartment() {
    return department;
}

std::string Member::getDesignation() {
    return designation;
}

void Member::printDetails() {
    std::cout << "Name: " << name << ", Designation: " << designation << ", Phone: " << phone << ", Room: " << room << ", Email: " << email << "\n";
}
