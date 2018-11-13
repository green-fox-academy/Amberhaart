#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <iostream>


class Animal {

public:
    Animal(std::string name);

    int getHunger();

    int getThirst();

    int eat();

    int drink();

    int play();

    void printStats();

private:

    int _hunger = 50;
    int _thirst = 50;
    std::string _name;

};


#endif //ANIMAL_ANIMAL_H
