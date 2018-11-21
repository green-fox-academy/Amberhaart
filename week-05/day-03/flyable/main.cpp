#include <iostream>
#include "helicopter.h"
#include "flyable.h"
#include "vehicle.h"
#include "bird.h"
#include "animal.h"
#include "reptile.h"
#include "mammal.h"


int main() {

    Helicopter apache;

    apache.fillTank();
    apache.takeOff();
    apache.fillTank();
    apache.fly();
    apache.useSpotlight();
    apache.land();

    std::cout << std::endl;

    Bird sparrow;

    sparrow.takeOff();
    sparrow.fly();
    sparrow.land();

    return 0;
}