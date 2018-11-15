#include <iostream>

#include "Station.h"
#include "Car.h"

int main() {

    Station station(1000);

    Car audi(13, 50);
    Car volkswagen(20, 60);
    Car opel(30, 55);
    Car dacia(10, 35);
    Car bmw(20, 70);

    station.fill(audi);
    station.fill(volkswagen);
    station.fill(opel);
    station.fill(dacia);
    station.fill(bmw);

    return 0;
}