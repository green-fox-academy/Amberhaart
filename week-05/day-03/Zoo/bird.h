#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H


#include "animal.h"

class Bird : public Animal {
public:
    Bird();

    Bird(std::string name);

    std::string breed() override;

    std::string getName() override;

};


#endif //ZOO_BIRD_H
