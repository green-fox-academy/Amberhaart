cmake_minimum_required(VERSION 3.12)
project(diagonals)

set(CMAKE_CXX_STANDARD 14)

include_directories(cmake)
include_directories(cmake-build-debug)

add_executable(diagonals
        cmake/FindSDL2.cmake
        cmake/FindSDL2_image.cmake
        cmake/FindSDL2_ttf.cmake
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/diagonals
        cmake-build-debug/diagonals.cbp
        cmake-build-debug/Makefile
        CMakeLists.txt
        main.cpp)
