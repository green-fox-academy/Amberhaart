#include "sharpie.h"

void printStats();

Sharpie::Sharpie(std::string color, float width) {
    _color = color;
    _width = width;
}

int Sharpie::use() {
    _inkAmount--;
}

void Sharpie::printStats() {
    std::cout << "color: " << _color << std::endl << "width: " << _width << std::endl
              << "ink left: " << _inkAmount << std:: endl << std::endl;
}