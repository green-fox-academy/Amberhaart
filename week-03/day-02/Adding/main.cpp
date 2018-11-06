#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    int *a2 = &a;
    int *b2 = &b;

    int c = (*a2 + *b2);

    std::cout << c << std::endl;

    return 0;
}