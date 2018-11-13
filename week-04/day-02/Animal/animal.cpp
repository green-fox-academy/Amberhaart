#include "animal.h"


Animal::Animal(std::string name) {
   _name = name;
}

int Animal::getHunger() {
    return _hunger;
}

int Animal::getThirst() {
    return _thirst;
}

int Animal::eat() {
    _hunger--;
}

int Animal::drink() {
    _thirst--;
}

int Animal::play() {
    _hunger++;
    _thirst++;
}

void Animal::printStats() {
    std::cout << _name << " stats: " << std::endl << "hunger: " << _hunger << std::endl << "thirst: " << _thirst<< std:: endl << std:: endl;

}


