#ifndef GARDENAPP_FLOWER_H
#define GARDENAPP_FLOWER_H


#include "plant.h"

class Flower : public Plant {
public:
    Flower(double water, std::string color);

    void water() override;
    void getStatus() override;
    bool needsWater() override;
};


#endif //GARDENAPP_FLOWER_H
