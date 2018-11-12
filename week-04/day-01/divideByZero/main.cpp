#include <iostream>
#include <fstream>
#include <exception>

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    double a = 10;
    double num = 0;

    std::cout << "Please provide a number with which we will divide 10 by, m'lord: ";
    std::cin >> num;

    try {
        if (num == 0) {
            throw std::string("fail");
        }
        std::cout << a / num << std::endl;

    } catch (std::string &e) {
        std::cout << e << std::endl;
    }


    return 0;
}