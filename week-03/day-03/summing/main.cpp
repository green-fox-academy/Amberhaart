#include <iostream>
#include <string>

int sum(int x);

int main(int argc, char *args[]) {

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer

    int number = 0;

    std::cout << "Please provide a number my lord: ";
    std::cin >> number;

    std::cout << "If we were to count up from zero to " << number << ", my lord, we would get " << sum(number) << "."
              << std::endl;

    return 0;
}

int sum(int x) {

    int i = 0;
    int y = 0;

    for (i; i < x + 1; i++) {

        y += i;
    }


    return y;
}