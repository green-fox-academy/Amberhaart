#include <iostream>

void swap(int *a, int *b);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    swap(&a, &b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;


    swap(&a, &b);

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}

void swap(int *a, int *b){
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;
}