#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it

    int km = 0;

    std::cout <<"Please provide distance in km: " << std::endl;
    std::cin >> km;

    double mile = km * 1.60934;

    std:: cout <<" The distance of "<< km << " km is " << mile << " miles." << std::endl;

    return 0;
}