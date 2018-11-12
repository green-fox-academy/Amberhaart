#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    // Write a program that opens a file called "my-file.txt", then prints
    // each of lines form the file.
    // You have to create the file, you can use C-programming but it is not mandatory

    std::ifstream rolandFile;
    rolandFile.open("my-file.txt");

    if (rolandFile.is_open()) {
        std::cout << ":)" << std::endl;
    } else {
        std::cout << ":(" << std::endl;
    }

    std::string line;
    while (std::getline(rolandFile, line)) {
        std::cout << line << std::endl;
    }

    rolandFile.close();

    return 0;
}