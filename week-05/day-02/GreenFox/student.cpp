#include "student.h"

Student::Student() {
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;
    _previousOrganization = "School of Life";
}

Student::Student(std::string name, int age, Gender gender, std::string previousOrganisation) {
    _name = name;
    _age = age;
    _gender = gender;
    _previousOrganization = previousOrganisation;
}

void Student::getGoal() {
    std::cout << "My goal is to be a junior sotfware developer." << std::endl;
}

void Student::introduce() {
    std::cout << "Hi, my name is " << _name << ", a " << _age << " year old " << genderToString() << " from "
              << _previousOrganization << " who skipped " << _skippedDays << " days from this course already."
              << std::endl;
}

int Student::skipDays(int numberOfDays) {
    _skippedDays += _skippedDays + numberOfDays;
}