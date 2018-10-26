#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;

    std::cout <<"Please provide five numbers to determine their sum and average. First number: ";
    std::cin >> a;

    std::cout <<"Second number: ";
    std::cin >> b;

    std::cout <<"Third number: ";
    std::cin >> c;

    std::cout <<"Forth number: ";
    std::cin >> d;

    std::cout <<"Fifth number: ";
    std::cin >> e;

    int Sum = (a + b + c + d + e);
    float Average = float(a + b + c + d + e) / 5;

    std::cout <<"Sum: " << Sum << std::endl;
    std::cout <<"Average: " << Average << std::endl;

    return 0;
}