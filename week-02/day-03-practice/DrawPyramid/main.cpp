#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // pyramid like this:
    //
    //
    //    *
    //   ***
    //  *****
    // *******
    //
    // The pyramid should have as many lines as the number was


    int x = 0;
    std::string block = "*";
    std::string air = (x, " ");


    std::cout << "Please let me know, oh Great Pharaoh, please let me know, how tall should your mighty pyramid be: " << std::endl;
    std::cin >> x;
    std::cout << "" << std::endl;

    for (int i = 0; i < x; i++) {

        block += 2;
        air += " ";

        std::cout << air << block << air << std::endl;
    }

    std::cout << "\nThis is only a stairway at the moment, but we are working on it. " << std::endl;

    return 0;
}