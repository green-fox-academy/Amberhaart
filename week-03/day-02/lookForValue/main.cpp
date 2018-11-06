#include <iostream>

int matcher(int array[], int length, int number);

int main()
{
    // Create a function which takes an array (and it's length) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0


    int array [5] {1, 2, 3, 4, 5};
    int sizeOfArray = sizeof(array) / sizeof(array[0]);

    int imputNumber;


    std::cout << "Please provide a number to search for, m'lord: ";
    std::cin >> imputNumber;
    std::cout << std::endl;

    std::cout << "The place of this number in our vault is " << matcher(array, sizeOfArray, imputNumber) << ", m'lord." <<std::endl;

    return 0;
}


int matcher (int array[], int length, int number) {

    bool match = true;
    int index = 0;

    for (int i = 0; i < length; ++i) {

        if (array[i] == number && match) {

            index = i;
        }
    }
        if (match)
            return index;
        else
            return 0;



}


