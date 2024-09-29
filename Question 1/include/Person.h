#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(const std::string& name);

    std::string getName() const;

private:
    std::string name; 
};

#endif 

