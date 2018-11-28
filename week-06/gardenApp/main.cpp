#include <iostream>

#include "tree.h"
#include "flower.h"
#include "garden.h"

int main() {

    Tree cedar(5, "yellow");
    Tree birch(15, "green");

    Flower rose(3, "red");
    Flower orchid(6, "white");

    cedar.getStatus();
    birch.getStatus();
    rose.getStatus();
    orchid.getStatus();

    return 0;
}