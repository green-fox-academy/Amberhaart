#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input,
    // Then prints "Odd" if the number is odd, or "Even" if it is even.

    int a = 0;

    std::cout << " Please provide a number: ";
    std::cin >> a;

    int b = a % 2;

    if (b == 0) {

        std::cout << "Your number is even." << std::endl;
    }
        else {

        std::cout << "Your number is odd." << std::endl;
    }

    return 0;
}