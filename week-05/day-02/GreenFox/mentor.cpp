#include "mentor.h"

Mentor::Mentor() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _level = Level::INTERMEDIATE;
}

Mentor::Mentor(std::string name, int age, Gender gender, Level level) {
    _name = name;
    _age = age;
    _gender = gender;
    _level = level;
}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

std::string Mentor::levelToString() {
    if (_level == Level::JUNIOR) {
        return "junior";
    } else if (_level == Level::INTERMEDIATE) {
        return "intermediate";
    } else if (_level == Level::SENIOR) {
        return "senior";
    }
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << genderToString() << ", " << levelToString()
              << " mentor." << std::endl;
}

