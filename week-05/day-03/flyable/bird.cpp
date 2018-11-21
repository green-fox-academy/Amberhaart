#include "bird.h"

Bird::Bird() {
    _name = "Bird";
}

Bird::Bird(std::string name) {
    _name = name;
}

std::string Bird::breed() {
    return "laying eggs.";
}

std::string Bird::getName() {
    return _name;
}

void Bird::land() {
    std::cout << "That was a nice trip, wasn't it?" << std::endl;
}

void Bird::fly() {
    std::cout << "I love the wind rustling my feathers!" << std::endl;
}

void Bird::takeOff() {
    std::cout << "Flap your wings faster! Up up and awaaaay!" << std::endl;
}