#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one

    int a = 0;
    int b = 0;

    std::cout << "Please provide two numbers. First one: ";
    std::cin >> a;
    std::cout << "Second one: ";
    std::cin >> b;

    if (a < b) {

        std::cout << b << " is the bigger number.";

    } else if (b < a) {

        std::cout << a << " is the bigger number";

    } else {

        std::cout <<  "These numbers are equal.";

    }

    return 0;
}