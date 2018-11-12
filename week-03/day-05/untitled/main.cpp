#include <iostream>

int main() {


    double numberOfNumbers = 0;
    double numberActual = 0;
    double numberSum = 0;

    std::cout << "Please provide a number, my lord: ";

    std::cin >> numberOfNumbers;

    for (int i = 0; i < numberOfNumbers; i ++) {

        std::cout << "number " << i + 1 << ": ";
        std::cin >> numberActual;

        numberSum += numberActual;

    }
    std::cout << std::endl;
    std::cout << "The sum of these numbers are " << numberSum << ", my lord, and the average of them is " << numberSum / numberOfNumbers << std::endl;

    return 0;
}