cmake_minimum_required(VERSION 3.12)
project(apples)

set(CMAKE_CXX_STANDARD 14)

add_executable(apples main.cpp apple/apple.h apple/apple.cpp apple_test/appletest.cpp)