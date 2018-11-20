#ifndef GREENFOX_SPONSOR_H
#define GREENFOX_SPONSOR_H


#include "person.h"

class Sponsor : public Person {
public:

    Sponsor();

    Sponsor(std::string name, int age, Gender gender, std::string company);

    void introduce() override;

    void getGoal() override;

    int hire();

private:
    std::string _company;
    int _hiredStudents = 0;

};


#endif //GREENFOX_SPONSOR_H
