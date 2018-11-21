#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H


#include "vehicle.h"
#include "flyable.h"

class Helicopter : public Vehicle, public Flyable {
public:
    void land() override;

    void fly() override;

    void takeOff() override;

    void useGas() override;

    void useSpotlight() override;

    void fillTank() override;
};


#endif //FLYABLE_HELICOPTER_H
