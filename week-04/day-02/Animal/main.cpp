#include <iostream>

#include "animal.h"

int main() {

    Animal koala("Koala");
    Animal giraffe("Giraffe");
    Animal elephant("Elephant");

    for (int i = 0; i < 5; ++i) {
        koala.play();
    }

    for (int j = 0; j < 10; ++j) {
        giraffe.drink();

    }

    for (int k = 0; k < 3; ++k) {
        elephant.eat();

    }

    koala.printStats();
    giraffe.printStats();
    elephant.printStats();

    return 0;
}