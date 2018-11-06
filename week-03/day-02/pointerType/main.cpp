#include <iostream>




int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers


    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *a2 = &a;
    double *b2 = &b;
    std::string *name2 = &name;


    std::cout << "" << std::endl;

    std::cout << a2 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << name2 << std::endl;

    std::cout << "" << std::endl;

    std::cout << *a2 << std::endl;
    std::cout << *b2 << std::endl;
    std::cout << *name2 << std::endl;

    return 0;
}


