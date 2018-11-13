#include <iostream>
#include <fstream>
#include <string>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

void copyFile(std::string originalFile, std::string copiedFile);

int main() {

    std::string inputFile;
    std::string outputFile;

    std::cout << "Where are the treasures located, my lord? ";
    std::cin >> inputFile;
    std::cout << "Of course, my lord. And where should they be relocated? ";
    std::cin >> outputFile;

    copyFile(inputFile, outputFile);

    return 0;
}

void copyFile(std::string originalFile, std::string copiedFile) {

    std::ifstream file(originalFile);
    std::ofstream file2(copiedFile);

    if (file.is_open()) {
        std::cout << ":)" << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }

    std::string line;

    while (std::getline(file, line)) {
        file2 << line << std::endl;
    }
    std::cout << "The treasure has been moved, my lord.";
}