#include <iostream>

// Write a recursive function that takes one parameter: n and counts down from n.
int counter(int n);

int main() {

    int number;

    std::cout << "Please give me a number, my lord: ";
    std::cin >> number;

    counter(number);

    return 0;
}

int counter(int n) {
    std::cout << n << std::endl;
    if (n > 0) {
        return counter(n - 1);
    } else
        return 0;

}