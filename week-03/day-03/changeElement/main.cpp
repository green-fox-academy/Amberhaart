#include <iostream>
#include <string>

int changeElement(int x[]);

int main(int argc, char* args[]) {

    // - Create an array variable named `s`
    //   with the following content: `[1, 2, 3, 8, 5, 6]`
    // - Change the 8 to 4
    // - Print the fourth element


    int s[]{1, 2, 3, 8, 5, 6};

    changeElement(s);

    return 0;
}

int changeElement(int x[]) {

    x[3] = 4;
    std::cout << x[3] << std::endl;
}