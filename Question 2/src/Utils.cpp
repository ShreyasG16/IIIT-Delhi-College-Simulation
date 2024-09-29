#include "../include/Utils.h"
#include <fstream>
#include <sstream>
#include <iostream>

void loadMembersFromCSV(const std::string& filename, Member* members, int& memberCount) {
    std::ifstream file(filename);
    std::string line;
    if (!file.is_open()) {
        std::cerr << "Error opening file.\n";
        return;
    }

    // Skip header line
    std::getline(file, line);

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string name, designation, email, phone, room, department;

        std::getline(ss, name, ',');
        std::getline(ss, designation, ',');
        std::getline(ss, email, ',');
        std::getline(ss, phone, ',');
        std::getline(ss, room, ',');
        std::getline(ss, department);

        members[memberCount++] = Member(name, designation, email, phone, room, department);
    }

    file.close();
}
