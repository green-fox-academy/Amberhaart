#include "flower.h"

Flower::Flower(double water, std::string color) {
    _water = water;
    _color = color;
}

void Flower::water() {
    _water += 0.75;
}
bool Flower::needsWater() {
    if ( _water < 5 ){
        return true;
    }else
        return false;
}

void Flower::getStatus() {
    if ( needsWater() == true ){
        std::cout << "The " << _color << " flower needs water." << std::endl;
    } else
        std::cout << "The " << _color << " flower doesn't need water." << std::endl;
}