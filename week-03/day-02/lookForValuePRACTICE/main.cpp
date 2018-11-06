#include <iostream>

int matcher (int array[], int arraySize, int number);


int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0


    const int vaultSize = 10;
    int vault [vaultSize] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int imputNumber = 0;

    std::cout << "Please provide a number m'lord: ";
    std::cin >>imputNumber;

    int p = matcher(vault, vaultSize, imputNumber);
    int *p2 = &p;


    std::cout << std::endl;
    std::cout << "The place of this number in our vault is " << matcher(vault, vaultSize, imputNumber) << " in line, m'lord." << std:: endl;
    std::cout << "The exact place of this number in our vault is " << p2 << ", m'lord.";
    std::cout << std::endl;

    return 0;
}


int matcher (int array[], int arraySize, int number) {

    bool match = true;
    int indexNumber = 0;

    for (int i = 0; i < arraySize; ++i) {
        if (array[i] == number && match) {

            indexNumber = i;
        }

    }

    if (match)
        return indexNumber;

    else
        return 0;

}