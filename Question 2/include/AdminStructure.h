#ifndef ADMINSTRUCTURE_H
#define ADMINSTRUCTURE_H

#include <string>

class AdministrativeOfficer {
private:
    std::string name;
    std::string roomNumber;
    std::string phoneNumber;
public:
    AdministrativeOfficer(const std::string& name, const std::string& room, const std::string& phone);

    std::string getName() const;
    std::string getRoomNumber() const;
    std::string getPhoneNumber() const;
    void printDetails();
};

#endif 
