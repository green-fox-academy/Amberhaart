#include "Car.h"

#include <iostream>

Car::Car(int gasAmount, int capacity) {
    gasAmount = _gasAmount;
    capacity = _capacity;
}

bool Car::isFull() {
    return _capacity == _gasAmount;
}

void Car::fill() {
    if (!isFull()) {
        _gasAmount++;
    }
}
