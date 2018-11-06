#include <iostream>
#include <vector>

int main()
{
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it


    int vaultSize;
    int vaultNumbers;
    int highestNumber;

    const int arraySize = vaultSize;

    std::vector<int> vault;

    std::cout << "how many numbers should our vault have, m'lord? ";
    std::cin >> vaultSize;
    std::cout << std::endl;
    std::cout << "Thank you, m'lord, now ";


    for (int i = 0; i < vaultSize; ++i) {

    std::cout << "the numbers: ";
    std::cin >> vaultNumbers;

    vault.push_back(vaultNumbers);
    }

    std::cout << std::endl;

    for (int i = 0; i < int (vault.size()); ++i) {

        std::cout << vault.at(i) << std::endl;

    }

        std::cout << std::endl;


    for (int i = 0; i < int (vault.size()); ++i) {


       while (vault.at(i) > highestNumber) {

           highestNumber = vault.at(i);
       }


    }

    std::cout << "The highest number of these would be " << highestNumber << ", m'lord."<< std::endl;

    return 0;
}