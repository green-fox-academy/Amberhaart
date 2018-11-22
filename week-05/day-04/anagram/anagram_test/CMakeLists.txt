cmake_minimum_required(VERSION 3.12)
project(anagram)

set(CMAKE_CXX_STANDARD 14)

add_executable(anagram main.cpp anagram_test/anagramtest.cpp anagram/anagram.cpp anagram/anagram.h)