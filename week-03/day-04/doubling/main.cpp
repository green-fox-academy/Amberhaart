#include <iostream>
#include <string>


int baseNum (int x);

int main(int argc, char* args[]) {

    // - Create an integer variable named `baseNum` and assign the value `123` to it
    // - Create a function called `doubling` that doubles it's input parameter and returns with an integer
    // - Print the result of `doubling(baseNum)`

    int number = 0;

    std::cout << "Please provide a number to double, my lord: " << std::endl;
    std::cin >> number;
    std::cout << "The double of " << number << " is " << baseNum(number) << ", my lord." << std::endl;


    return 0;
}

int baseNum (int x) {

    x = x * 2;

    return x;

}


