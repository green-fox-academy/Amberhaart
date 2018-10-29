#include <iostream>
#include <string>


int sum(int numbers [], int size);

int main(int argc, char* args[]) {

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer

    int Roland [5] = {32, 12, 40, 11, 55};

    sum(Roland, 5);

    return 0;
}

int sum (int numbers[], int size) {

    int sum = 0;

    for (int i = 0; i < size; i++) {

        sum = sum + numbers[i]; }

     std::cout << sum << std::endl;

        return sum;

    }
