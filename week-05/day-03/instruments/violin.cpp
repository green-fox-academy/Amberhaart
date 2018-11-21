#include "violin.h"

Violin::Violin() {
    _numberOfStrings = 4;
    _name = "Violin";
}

Violin::Violin(int numberOfStrings) {
    _numberOfStrings = numberOfStrings;
    _name = "Violin";
}

void Violin::play() {
    std::cout << _name << ", a " << _numberOfStrings << " stringed instrument that goes ";
    sound();
}

void Violin::sound() {
    std::cout << "Screech\n";
}