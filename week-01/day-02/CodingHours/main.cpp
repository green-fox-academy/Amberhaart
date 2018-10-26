
#include <iostream>

int main(int argc, char* args[]) {

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52

    int a = 6;
    int b = 17;
    int c = 5;


    std::cout << "An average Green Fox attendee codes " << a*b*c << " hours in a semester." << std::endl;

    int e = 24;
    int f = 7;
    int g = 52;

    std::cout << "An average Green Fox attendee codes " << e*f/g*10 << "% of their time." << std::endl;


    return 0;
}