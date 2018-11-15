cmake_minimum_required(VERSION 3.12)
project(TestrolStation)

set(CMAKE_CXX_STANDARD 14)

add_executable(TestrolStation main.cpp car.cpp car.h station.cpp station.h)