#ifndef FLYABLE_VEHICLE_H
#define FLYABLE_VEHICLE_H


class Vehicle {
public:
    virtual void useGas() = 0;

    virtual void useSpotlight() = 0;

    virtual void fillTank() = 0;

protected:
    int _fuelAmount = 50;
};


#endif //FLYABLE_VEHICLE_H
