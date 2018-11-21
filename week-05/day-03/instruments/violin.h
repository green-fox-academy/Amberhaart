#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H


#include "stringedinstruments.h"

class Violin : public StringedInstruments {
public:
    Violin();

    Violin(int numberOfStrings);

    void play() override;

protected:
    void sound() override;
};


#endif //INSTRUMENTS_VIOLIN_H
