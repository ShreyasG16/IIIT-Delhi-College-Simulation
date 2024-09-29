#ifndef ADMIN_STRUCTURE_H
#define ADMIN_STRUCTURE_H

#include "Department.h"

class AdminStructure {
public:
    AdminStructure(); 
    
    bool addDepartment(const Department& department);
    void displayDepartments() const;
    bool fetchDetailsByName(const std::string& name) const;

private:
    Department departments[5]; // IRD, Academics, Stu-dent Affairs, Store & Purchase and Library.
    int departmentCount; 
};

#endif 