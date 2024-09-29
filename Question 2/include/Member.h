#ifndef MEMBER_H
#define MEMBER_H

#include <string>

class Member {
public:
    Member();
    Member(std::string n, std::string d, std::string e, std::string p, std::string r, std::string dep);

    std::string getName();
    std::string getPhone();
    std::string getRoom();
    std::string getDepartment();
    std::string getEmail();
    std::string getDesignation();
    void printDetails();

private:
    std::string name;
    std::string designation;
    std::string email;
    std::string phone;
    std::string room;
    std::string department;
};

#endif 
