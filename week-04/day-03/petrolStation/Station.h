#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H

#include <iostream>
#include "Car.h"

class Station {

public:
    Station(int gasAmount);
    int getGasAmount() const;
    void fill(Car& car);

private:
    int _gasAmount;

};


#endif //PETROLSTATION_STATION_H
