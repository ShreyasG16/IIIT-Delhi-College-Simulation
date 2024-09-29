#include "../include/AdminStructure.h"
#include <iostream>

AdministrativeOfficer::AdministrativeOfficer(const std::string& name, const std::string& room, const std::string& phone)
    : name(name), roomNumber(room), phoneNumber(phone) {}

std::string AdministrativeOfficer::getName() const { return name; }
std::string AdministrativeOfficer::getRoomNumber() const { return roomNumber; }
std::string AdministrativeOfficer::getPhoneNumber() const { return phoneNumber; }

void AdministrativeOfficer::printDetails() {
    std::cout << "Name: " << name << ", Phone: " << phoneNumber << ", Room: " << roomNumber << "\n";
}
