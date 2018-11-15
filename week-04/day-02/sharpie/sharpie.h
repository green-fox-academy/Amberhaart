#ifndef SHARPIE_SHARPIE_H
#define SHARPIE_SHARPIE_H

#include <iostream>

class Sharpie {

public:
    Sharpie(std::string color, float width);

    int use();

    void printStats();

private:
    std::string _color;
    float _width;
    float _inkAmount = 50;
};


#endif //SHARPIE_SHARPIE_H
