
#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000

    double d = 600;
    double e = 1000;


   double a = 20 ;
   double b = (d / a) ;
   double c = (e / a / b);

    std::cout << "a is "<< a << std::endl;
    std::cout << "b is "<< b << std::endl;
    std::cout << "c is "<< c << std::endl;


    return 0;
}