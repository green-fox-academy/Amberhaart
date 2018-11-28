#include "wirelessadapter.h"
#include <iostream>

WirelessAdapter::WirelessAdapter(int id, int usbType, int id1, int bandWidth) : Device(id), USBDevice(id, usbType),
                                                                                NetworkDevice(id1, bandWidth) {}


void WirelessAdapter::info() {
    std::cout << "info: \n ID: " << _id << "\n USB Type: " << _usbType << "\n Bandwidth: " << _bandWidth;
}




