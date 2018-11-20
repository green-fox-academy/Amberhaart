#include "person.h"

Person::Person() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
}

Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender) {}

void Person::introduce() {
    std::cout << "Hi, I am " << _name << ", a " << _age << " year old " << genderToString() << "." << std::endl;
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

std::string Person::genderToString() {
    if (_gender == Gender::FEMALE) {
        return "female";
    } else if (_gender == Gender::MALE) {
        return "male";
    }
}
