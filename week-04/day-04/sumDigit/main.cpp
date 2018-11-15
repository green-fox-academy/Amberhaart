#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int sumDigit(int n);

int recSumDigit(int n);

int main() {

    int number = 0;

    std::cout << "Captain, please set a course to our destination: ";
    std::cin >> number;
    std::cout << "Ah yes, that would be star-coordinate " << sumDigit(number) << ". Full speed ahead!" << std::endl;

    std::cout << "In other other words, the destination is " << recSumDigit(number) << "." << std::endl;
    return 0;
}

int sumDigit(int n) {

    int starCoordinate = 0;

    while (n != 0) {
        starCoordinate += n % 10;
        n = n / 10;
    }
    return starCoordinate;
}

int recSumDigit(int n) {
    if (n == 0) {
        return 0;
    } else
        return (n % 10 + recSumDigit (n / 10));
}