#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H


#include "animal.h"
#include "flyable.h"

class Bird : public Animal, public Flyable {
public:
    Bird();

    Bird(std::string name);

    std::string breed() override;

    std::string getName() override;

    void land() override;

    void fly() override;

    void takeOff() override;

};


#endif //ZOO_BIRD_H
