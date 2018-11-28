#ifndef WIRELESSADAPTER_WIRELESSADAPTER_H
#define WIRELESSADAPTER_WIRELESSADAPTER_H


#include "usbdevice.h"
#include "networkdevice.h"

class WirelessAdapter : public USBDevice, public NetworkDevice {
public:
    WirelessAdapter(int id, int usbType, int id1, int bandWidth);

    void info();
};


#endif //WIRELESSADAPTER_WIRELESSADAPTER_H
