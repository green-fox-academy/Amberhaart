cmake_minimum_required(VERSION 3.12)
project(wirelessAdapter)

set(CMAKE_CXX_STANDARD 14)

add_executable(wirelessAdapter main.cpp wirelessadapter.cpp wirelessadapter.h usbdevice.cpp usbdevice.h networkdevice.cpp networkdevice.h device.cpp device.h)