#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>
#include "Member.h"

class Department {
private:
    std::string departmentName;
    Member members[5];
    int memberCount;
public:
    Department(const std::string& name);

    void addMember(const Member& member);
    void printDepartmentDetails();
    void printMemberPhones();
    void printMemberRooms();
};

#endif 
