#ifndef ZOO_MAMMAL_H
#define ZOO_MAMMAL_H


#include "animal.h"

class Mammal : public Animal {
public:
    Mammal();

    Mammal(std::string name);

    std::string breed() override;

    std::string getName() override;
};


#endif //ZOO_MAMMAL_H
