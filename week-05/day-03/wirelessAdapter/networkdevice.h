#ifndef WIRELESSADAPTER_NETWORKDEVICE_H
#define WIRELESSADAPTER_NETWORKDEVICE_H

#include "device.h"

class NetworkDevice : virtual public Device {

public:
    NetworkDevice(int id, int bandWidth);

protected:
    int _bandWidth;
};


#endif //WIRELESSADAPTER_NETWORKDEVICE_H
