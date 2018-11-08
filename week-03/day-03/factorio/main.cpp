#include <iostream>
#include <string>

int factorio(int x);

int main(int argc, char *args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.

    int number = 0;
    int numberFact = 0;

    std::cout << "Please give me a number, my lord: ";
    std::cin >> number;

    factorio(number);

    numberFact = factorio(number);

    std::cout << "According to my calculations, the factorial of this number should be " << numberFact <<std::endl;

    return 0;
}

int factorio(int x) {

    int i = 1;
    int y = 1;

    for(int i = 1; i < x+1; i++) {

        y *= i;
    }

    return y;
}