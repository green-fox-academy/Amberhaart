#ifndef GREENFOX_STUDENT_H
#define GREENFOX_STUDENT_H


#include "person.h"

class Student : public Person {
public:
    Student();

    Student(std::string name, int age, Gender gender, std::string previousOrganisation);

    void getGoal() override;

    void introduce() override;

    int skipDays(int numberOfDays);

private:
    std::string _previousOrganization;
    int _skippedDays = 0;

};


#endif //GREENFOX_STUDENT_H
