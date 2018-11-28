#ifndef GARDENAPP_TREE_H
#define GARDENAPP_TREE_H


#include "plant.h"

class Tree : public Plant {
public:
    Tree(double water, std::string color);

    void water() override;
    void getStatus() override;
    bool needsWater() override;
};


#endif //GARDENAPP_TREE_H
