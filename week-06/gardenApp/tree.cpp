#include "tree.h"

Tree::Tree(double water, std::string color) {
    _water = water;
    _color = color;
}

void Tree::water() {
    _water += 0.4;
}
bool Tree::needsWater() {
    if ( _water < 10 ){
        return true;
    }else
        return false;
}

void Tree::getStatus() {
    if ( needsWater() == true ){
        std::cout << "The " << _color << " tree needs water." << std::endl;
    } else
        std::cout << "The " << _color << " tree doesn't need water." << std::endl;
}