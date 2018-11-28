#ifndef GARDENAPP_GARDEN_H
#define GARDENAPP_GARDEN_H

#include "flower.h"
#include "tree.h"
#include "plant.h"
#include <vector>


class Garden {
public:
    Garden() = default;
    void fillGarden(Plant* plants);

protected:
    std::vector<Plant*> gardenPlants;

};


#endif //GARDENAPP_GARDEN_H
