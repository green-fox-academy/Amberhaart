#include <iostream>
#include <fstream>
#include <string>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

void writeMultipleLines(std::string path, std::string word, int number);

int main() {

    std::string pathToFile;
    std::string wordsInFile;
    int numberOfLines;

    std::cout << "Please provide the location of the file, my lord: ";
    std::cin >> pathToFile;
    std::cout << "Thank you, my lord. Now, the magic words: ";
    std::cin >> wordsInFile;
    std::cout << "I am honored, my lord. Finally, how many times must this be said? ";
    std::cin >> numberOfLines;

    writeMultipleLines(pathToFile, wordsInFile, numberOfLines);

    std::cout << std::endl;
    std::cout << "Behold, my lord, the deed is done.";

    return 0;
}

void writeMultipleLines(std::string path, std::string word, int number) {

    std::ofstream file(path);

    if (file.is_open()) {

        for (int i = 0; i < number; i++) {

            file << word << std::endl;

        }

    } else {
        std::cout << "Forgive me, my lord, there were some complications.";
    }

}