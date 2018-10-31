#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was

    int x = 0;
    std::string y = "";

    std::cout << "Please give me a number m'lord: " << std::endl;
    std::cin >> x;
    std::cout << "" << std::endl;

    for (int i = 0; i < x; i++) {

        y += "*";

        std::cout << y << std::endl;

    }

    return 0;
}