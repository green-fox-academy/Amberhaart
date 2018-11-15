#include "Car.h"

#include <iostream>

Car::Car(int gasAmount, int capacity) {
     _gasAmount = gasAmount;
     _capacity = capacity;
}

bool Car::isFull() {
    return _capacity == _gasAmount;
}

void Car::fill() {
    {
        _gasAmount++;
    }
}
