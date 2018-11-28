#ifndef WIRELESSADAPTER_USBDEVICE_H
#define WIRELESSADAPTER_USBDEVICE_H

#include <iostream>

#include "device.h"

enum class USBType {
    USB_TYPE_2,
    USB_TYPE_3
};

class USBDevice : virtual public Device {
protected:
    USBType _usbType;
    std::string usbToString;

public:
    USBDevice(int id, USBType usbType);

};


#endif //WIRELESSADAPTER_USBDEVICE_H
