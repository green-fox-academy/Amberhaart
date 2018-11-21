#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H

#include <iostream>
#include "stringedinstruments.h"

class ElectricGuitar : public StringedInstruments {

public:
    ElectricGuitar();

    ElectricGuitar(int numberOfStrings);

    void play() override;

    void sound() override;
};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
