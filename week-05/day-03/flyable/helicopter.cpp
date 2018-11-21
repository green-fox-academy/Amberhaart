#include "helicopter.h"
#include <iostream>

void Helicopter::land() {
    std::cout << "Landing now!" << std::endl;
}
void Helicopter::fly() {
    std::cout << "Look at this majestic sight..." << std::endl;
}
void Helicopter::takeOff() {
    std::cout << "Taking off!" << std::endl;
}
void Helicopter::useGas(){
    _fuelAmount--;
}
void Helicopter::useSpotlight(){
    std::cout << "So bright in here!" << std::endl;
}
void Helicopter::fillTank(){
    _fuelAmount++;
}