cmake_minimum_required(VERSION 3.12)
project(flyable)

set(CMAKE_CXX_STANDARD 14)

add_executable(flyable main.cpp flyable.cpp flyable.h vehicle.cpp vehicle.h helicopter.cpp helicopter.h animal.cpp animal.h bird.cpp bird.h reptile.cpp reptile.h mammal.cpp mammal.h animal.cpp animal.h)