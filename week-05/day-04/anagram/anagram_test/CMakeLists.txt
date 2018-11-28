#CHANGE THIS TO THE PATH WHERE YOU EXTRACTED GOOGLE TEST FILES TO
set(PATH_TO_GOOGLETEST "/Users/Roland/Amberhaart/Testing/googletest")
add_subdirectory(${PATH_TO_GOOGLETEST} ${CMAKE_CURRENT_BINARY_DIR}/googletest)
include_directories(${PATH_TO_GOOGLETEST}/googletest/include)

add_executable(anagram_tests anagramtest.cpp)
target_link_libraries(anagram_tests gtest gtest_main)
target_link_libraries(anagram_tests anagram)