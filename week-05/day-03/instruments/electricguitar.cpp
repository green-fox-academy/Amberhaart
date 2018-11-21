#include "electricguitar.h"

ElectricGuitar::ElectricGuitar() {
    _numberOfStrings = 6;
    _name = "Electric Guitar";
}

ElectricGuitar::ElectricGuitar(int numberOfStrings) {
    _numberOfStrings = numberOfStrings;
    _name = "Electric Guitar";
}

void ElectricGuitar::play() {
    std::cout << _name << ", a " << _numberOfStrings << " stringed instrument that goes ";
    sound();
}

void ElectricGuitar::sound() {
    std::cout << "Twang\n";
}