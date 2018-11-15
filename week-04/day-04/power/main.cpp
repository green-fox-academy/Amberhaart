#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

long long powerN(long long base, long long n);

int main() {

    long long baseNum = 0;
    long long nNum = 0;

    std::cout
            << "My liege, we need to calculate the trajectory of the photon torpedoes! Please provide the necessary two numbers: ";
    std::cin >> baseNum >> nNum;
    std::cout << "Firing torpedoes to " << powerN(baseNum, nNum) << "!" << std::endl;

    return 0;
}

long long powerN(long long base, long long n) {

    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= base;
    }
    return result;
}