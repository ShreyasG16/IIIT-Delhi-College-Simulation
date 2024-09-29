#include <iostream>
#include <cstring> 

class Contact {
public:
    std::string name;
    std::string email;
    Contact(const std::string& name, const std::string& email) : name(name), email(email) {}
};

class EscalationLevel {
public:
    int minDays;
    int maxDays;
    std::string levelName;
    Contact contact;

    EscalationLevel(int minDays, int maxDays, const std::string& levelName, const std::string& name, const std::string& email)
        : minDays(minDays), maxDays(maxDays), levelName(levelName), contact(name, email) {}

    bool isInRange(int days) const {
        return days >= minDays && days <= maxDays;
    }
};


class EscalationManager {
private:
    EscalationLevel levels[4];
    
public:
    EscalationManager() : levels{
        EscalationLevel(0, 3, "Junior Administrative Officer", "Imran Khan", "imran@iiitd.ac.in"),
        EscalationLevel(4, 6, "Assistant Administrative Officer", "Nidhi Yadav", "nidhi@iiitd.ac.in"),
        EscalationLevel(7, 9, "Administrative Officer", "Ajay Kumar", "ajay@iiitd.ac.in"),
        EscalationLevel(10, 365, "Director", "Prof. Ranjan Bose", "bose@iiitd.ac.in, director@iiitd.ac.in")
    } {}

    void printEscalationDetails(const std::string& problem, int days) const {
        for (const auto& level : levels) {
            if (level.isInRange(days)) {
                std::cout << "Escalation details for your problem regarding \"" << problem << "\":\n";
                std::cout << "Issue has been escalated to the " << level.levelName << ".\n";
                std::cout << "Contact: " << level.contact.name << " (" << level.contact.email << ")\n";
                return;
            }
        }
        std::cout << "Invalid number of days.\n";
    }
};

int main() {
    EscalationManager manager;
    
    std::string problem;
    int days;

    std::cout << "Enter the subject of your problem: ";
    std::getline(std::cin, problem);

    std::cout << "How many days have passed since you filed the complaint? ";
    std::cin >> days;

    manager.printEscalationDetails(problem, days);

    return 0;
}
