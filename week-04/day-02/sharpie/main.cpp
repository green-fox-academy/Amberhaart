#include <iostream>

#include "sharpie.h"

int main() {

    Sharpie parker("blue", 2.3);
    Sharpie faberCastell("red", 2.1);
    Sharpie aurora("black", 2.5);

    for (int i; i < 10; i++){
        parker.use();
    }

    for (int i; i < 15; i++){
        faberCastell.use();
    }

    for (int i; i < 30; i++){
        aurora.use();
    }

    parker.printStats();
    faberCastell.printStats();
    aurora.printStats();

    return 0;
}