#include <iostream>
#include <string>

int incrementElement(int x[]);

int main(int argc, char* args[]) {

    // - Create an array variable named `t`
    //    with the following content: `[1, 2, 3, 4, 5]`
    // - Increment the third element
    // - Print the third element

    int t[]{1, 2, 3, 4, 5};

    incrementElement(t);

    return 0;
}

int incrementElement(int x[]){

    x[2]++;

    std::cout << x[2] << std::endl;
}