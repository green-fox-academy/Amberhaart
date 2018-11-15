#include <iostream>

#include "Station.h"
#include "Car.h"

int main() {

    Station station(1000);

    Car audi(13, 70);
    Car volkswagen(20, 50);
    Car opel(30, 60);
    Car dacia(10, 65);
    Car bmw(20, 75);

    station.fill(audi);
    station.fill(volkswagen);
    station.fill(opel);
    station.fill(dacia);
    station.fill(bmw);

    return 0;
}