#include "bassguitar.h"

BassGuitar::BassGuitar() {
    _numberOfStrings = 4;
    _name = "Bass Guitar";
}

BassGuitar::BassGuitar(int numberOfStrings) {
    _numberOfStrings = numberOfStrings;
    _name = "Bass Guitar";
}

void BassGuitar::play() {
    std::cout << _name << ", a " << _numberOfStrings << " stringed instrument that goes " << sound() << std::endl;

}

std::string BassGuitar::sound() {
    return "Duum-duum-duum\n";
}