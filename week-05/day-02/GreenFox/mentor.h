#ifndef GREENFOX_MENTOR_H
#define GREENFOX_MENTOR_H

#include "person.h"

enum class Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:

    Mentor();

    Mentor(std::string name, int age, Gender gender, Level level);

    void getGoal() override;

    void introduce() override;

    std::string levelToString();

private:
    Level _level;
};


#endif //GREENFOX_MENTOR_H
