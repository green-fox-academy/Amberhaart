#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H


#include "animal.h"

class Reptile : public Animal {
public:
    Reptile();

    Reptile(std::string name);

    std::string breed() override;

    std::string getName() override;
};


#endif //ZOO_REPTILE_H
