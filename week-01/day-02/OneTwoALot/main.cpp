#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number form the standard input,
    // If the number is zero or smaller it should print: Not enough
    // If the number is one it should print: One
    // If the number is two it should print: Two
    // If the number is more than two it should print: A lot

    int a = 0;

    std::cout <<"Please provide a number: ";
    std::cin >> a;

    if (a <=0) {

        std::cout <<"Not enough" << std::endl;

    }  else if (a == 1) {

        std::cout <<"One" << std::endl;

    }   else if (a == 2) {

        std::cout <<"Two" << std::endl;

    }    else if (a > 2 ) {

        std::cout <<"A lot" << std::endl;
    }


    return 0;
}