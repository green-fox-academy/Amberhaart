#include <iostream>
#include <fstream>
#include <exception>

void divider (double x);

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0

    double num = 0;

    std::cout << "Please provide a number with which we will divide 10 by, m'lord: ";
    std::cin >> num;

    divider(num);

    return 0;
}
void divider (double x) {

    try {
        if (x == 0) {
            throw std::string("fail");
        }
        std::cout << 10 / x << std::endl;

    } catch (std::string &e) {
        std::cout << e << std::endl;
    }
}