cmake_minimum_required(VERSION 3.12)
project(gardenApp)

set(CMAKE_CXX_STANDARD 14)

add_executable(gardenApp main.cpp plant.cpp plant.h tree.cpp tree.h flower.cpp flower.h garden.cpp garden.h)