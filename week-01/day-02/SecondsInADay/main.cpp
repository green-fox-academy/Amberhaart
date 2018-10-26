#include <iostream>

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    int Hoursinaday = 24;
    int Minutesinaday = (Hoursinaday * 60);
    int Secondsinaday = (Minutesinaday * 60);

    int Remainingseconds = Hoursinaday + Minutesinaday + Secondsinaday - currentSeconds - (currentMinutes * 60) - (currentHours * 60 * 60);

    std::cout <<"If it is 14:34:42 right now, " << Remainingseconds <<" seconds remain from this day."<< std::endl;

    return 0;
}