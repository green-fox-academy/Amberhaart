#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again


    int firstNumber;
    int secondNumber;
    int thirdNumber;
    int forthNumber;
    int fifthNumber;

    std::cout << "Please provide 5 numbers, my'lord. The first one: ";
    std::cin >> firstNumber;
    std::cout << "The second: ";
    std::cin >> secondNumber;
    std::cout << "The third: ";
    std::cin >> thirdNumber;
    std::cout << "The forth: ";
    std::cin >> forthNumber;
    std::cout << "The fifth: ";
    std::cin >> fifthNumber;

    std::cout << std::endl;



    int numbers[] {firstNumber, secondNumber, thirdNumber, forthNumber, fifthNumber};

    int *numbersPointer;

    numbersPointer = numbers;

    for (int i = 0; i < sizeof(numbers) / sizeof(int); ++i) {

        std::cout << *(numbersPointer + i) << std::endl;
    }

    return 0;
}