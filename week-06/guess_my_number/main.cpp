#include <iostream>
#include <stdlib.h>
#include <vector>

void guessNumber(int number, int guess, int lives);

int getRandomNumberFromRange(int vectorStart, int vectorEnd);

int addLives(int lives);

int main() {

    srand(time(NULL));

    int lives = 5;
    int guessnum;
    int rangeStart;
    int rangeEnd;
    std::vector<int> guessRange = {};

    std::cout << "Please give a range from which we will chose from. First number: ";
    std::cin >> rangeStart;
    std::cout << "Good. Now the second: ";
    std::cin >> rangeEnd;
    std::cout << "Please provide a number between " << rangeStart << " and " << rangeEnd << ". You have 5 lives: ";
    std::cin >> guessnum;

    guessNumber(getRandomNumberFromRange(rangeStart, rangeEnd), guessnum, lives);

    return 0;

}

void guessNumber(int number, int guess, int lives) {
    bool numberGuessed = false;

    while (lives != 0 && numberGuessed == false) {

        lives--;
        if (number == guess) {
            numberGuessed = true;
            std::cout << "Correct! You have won!";
        } else if (number < guess) {
            std::cout << "Too high. You have " << lives << " lives left. ";
            std::cin >> guess;
        } else if (number > guess) {
            std::cout << "Too low. You have " << lives << " lives left. ";
            std::cin >> guess;
        }

    }
    if (lives == 0) {
        std::cout << "You were unable to correctly guess the number, too bad. It was " << number << ". Game over.";
    }
}

int getRandomNumberFromRange(int vectorStart, int vectorEnd) {
    std::vector<int> vector;
    for (int i = vectorStart; i <= vectorEnd; ++i) {
        vector.push_back(i);
    }
    for (int j = 0; j < rand(); ++j) {

        std::random_shuffle(vector.begin(), vector.end());
    }
    return vector[0];
}

int addLives(int lives){
    lives ++;
}