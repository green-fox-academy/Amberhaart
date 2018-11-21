#ifndef INSTRUMENTS_STRINGEDINSTRUMENTS_H
#define INSTRUMENTS_STRINGEDINSTRUMENTS_H

#include "instrument.h"


class StringedInstruments : public Instrument {
public:
    virtual void sound() = 0;

protected:
    int _numberOfStrings;
};


#endif //INSTRUMENTS_STRINGEDINSTRUMENTS_H
