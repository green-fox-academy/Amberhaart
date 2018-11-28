#ifndef GARDENAPP_PLANT_H
#define GARDENAPP_PLANT_H

#include <iostream>


class Plant {
public:
    virtual void water() = 0;
    virtual void getStatus() = 0;
    virtual bool needsWater() = 0;

protected:
    std::string _color;
    int _water;
};


#endif //GARDENAPP_PLANT_H
