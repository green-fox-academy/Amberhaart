#include <iostream>
#include <fstream>
#include <string>

void lineCounterFunction(std::string);

int main() {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::string fileName;

    std::cout << "What is the name of the file, m'lord? ";
    std::cin >> fileName;

    lineCounterFunction(fileName);
}

void lineCounterFunction(std::string file) {

    std::ifstream countedFile(file);
    if (countedFile.is_open()) {

        std::cout << ":)" << std::endl;

        std::string line;
        int counter = 0;

        while (std::getline(countedFile, line)) {
            ++counter;
        }
        std::cout << counter << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }


}
