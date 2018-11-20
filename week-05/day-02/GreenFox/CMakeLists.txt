cmake_minimum_required(VERSION 3.12)
project(GreenFox)

set(CMAKE_CXX_STANDARD 14)

add_executable(GreenFox main.cpp person.cpp person.h student.cpp student.h mentor.cpp mentor.h sponsor.cpp sponsor.h cohort.cpp cohort.h)