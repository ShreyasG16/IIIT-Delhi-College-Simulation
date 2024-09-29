#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include "Member.h"

class Department {
public:
    Department(); 
    Department(const std::string& name); 

    bool addMember(const Member& member); 
    void listMembers() const; 
    bool findMember(const std::string& name, Member& member) const; 
    int getMemberCount() const; 

private:
    std::string name; 
    Member members[100]; 
    int memberCount;
};

#endif 