#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <iostream>

class Counter {

public:
    Counter();
    Counter(int number);

    int add();
    int add(int addNumber);

    int get();
    int reset();

private:
    int _number = 0;
    int _initialValue = 0;

};


#endif //COUNTER_COUNTER_H
