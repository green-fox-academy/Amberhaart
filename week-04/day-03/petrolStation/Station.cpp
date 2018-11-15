#include "Station.h"
#include "Car.h"

Station::Station(int gasAmount) {
    gasAmount = _gasAmount;
}



int Station::getGasAmount() const {
    return _gasAmount;
}

void Station::fill(Car &car) {
    while (car.isFull() != true) {
        std::cout << "Filling car!" << std::endl;
        car.fill();
        _gasAmount--;

    }
    std::cout << "Gas left in the station: " << _gasAmount << std::endl;
}