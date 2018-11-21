#ifndef INSTRUMENTS_BASGUITAR_H
#define INSTRUMENTS_BASGUITAR_H


#include "stringedinstruments.h"

class BassGuitar : public StringedInstruments {

public:
    BassGuitar();

    BassGuitar(int numberOfStrings);

    void play() override;

protected:
    void sound() override;
};


#endif //INSTRUMENTS_BASGUITAR_H
