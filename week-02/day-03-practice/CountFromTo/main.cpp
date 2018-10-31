#include <iostream>

int main(int argc, char* args[]) {

    // Create a program that asks for two numbers
    // If the second number is not bigger than the first one it should print:
    // "The second number should be bigger"
    //
    // If it is bigger it should count from the first number to the second by one
    //
    // example:
    //
    // first number: 3, second number: 6, should print:
    //
    // 3
    // 4
    // 5


    int x = 0;
    int y = 0;

    std::cout << "Please provide two numbers, m'lord. What would be the first one? ";
    std::cin >> x;
    std::cout << "And the second number, m'lord? ";
    std::cin >> y;
    std::cout << "" << std::endl;

    if (x >= y) {

        std::cout << "Forgive me, m'lord, but I forgot to mention that the second number should be bigger. Let's try this again.\n ";

        std::cout << "Please provide two numbers, m'lord. What would be the first one? ";
        std::cin >> x;
        std::cout << "And the second number, m'lord? ";
        std::cin >> y;
        std::cout << "" << std::endl;

        if (x >= y) {

            std::cout << "M'lord, the second number should be bigger. ";

        } else for (int i = x; i < y; i++) {

                std::cout << i << std::endl;
            }

    } else for (int i = x; i < y; i++) {

        std::cout << i << std::endl;
    }


    return 0;
}