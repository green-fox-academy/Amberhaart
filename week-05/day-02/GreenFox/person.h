#ifndef GREENFOX_PERSON_H
#define GREENFOX_PERSON_H

#include <iostream>

enum class Gender {
    MALE,
    FEMALE
};

class Person {
public:
    Person();

    Person(const std::string &name, int age, Gender gender);

    virtual void introduce();

    virtual void getGoal();

    std::string genderToString();

protected:
    std::string _name;
    int _age;
    Gender _gender;

};


#endif //GREENFOX_PERSON_H
