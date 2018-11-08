#include <iostream>
#include <string>

void printElements (int x[]);

int main(int argc, char *args[]) {

    // - Create an array variable named `numbers`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print all the elements of `numbers`

    int numbers[]{4, 5, 6, 7, 8};

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {

        std::cout << numbers[i] << " ";
    }


     std::cout << std::endl;

    printElements(numbers);

    return 0;
}

void printElements (int x[]) {

    std::cout << std::endl << std::endl ;
    std::cout << "function sizeof x :"   << sizeof(x)    << std::endl;
    std::cout << "function sizeof *x :"  << sizeof(*x)   << std::endl;
    std::cout << "function sizeof int: "  << sizeof(int) << std::endl << std::endl;

    for (int i = 0; i < sizeof(x); i++) {

        std::cout << x[i] << " ";
    }
}