#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int numberAdder(int n);

int main() {

    int number;

    std::cout << "My lord, the number you mentioned before, what was it: ";
    std::cin >> number;

    std::cout << numberAdder(number);

    return 0;
}

int numberAdder(int n) {
    if (n <= 1) {
        return 1;

    } else
        return n + numberAdder(n - 1);


}