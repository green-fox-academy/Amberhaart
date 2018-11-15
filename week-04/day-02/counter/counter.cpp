#include "counter.h"
#include <iostream>


Counter::Counter() {
    _number = 0;
    _initialValue = 0;
}

Counter::Counter(int number) {
    _number = number;
    _initialValue = number;
}

int Counter::add() {
    _number++;
}

int Counter::add(int addNumber) {
    _number += addNumber;
}

int Counter::get() {
    std::cout << "Current number: " << _number << std::endl;

    return _number;
}

int Counter::reset() {
    _number = _initialValue;
}
