#ifndef MEMBER_H
#define MEMBER_H

#include "Person.h"  // Include Person header for inheritance

class Member : public Person {  // Member now inherits from Person
public:
    Member(); 
    Member(const std::string& name, const std::string& designation, const std::string& email, const std::string& phone, const std::string& room);

    // Getters for member-specific details
    std::string getDesignation() const;
    std::string getEmail() const;
    std::string getPhone() const;
    std::string getRoom() const;

private:
    std::string designation; 
    std::string email;
    std::string phone;
    std::string room; 
};

#endif 
