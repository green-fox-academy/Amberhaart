
#include <iostream>
#include <string>

int main(int argc, char *args[]) {

    // - Create an array variable named `abc`
    //   with the following content: `["first", "second", "third"]`
    // - Swap the first and the third element of `abc`

    std::string abc[]{"first", "second", "third"};

    std::string temp = abc[0];
    abc[0] = abc[2];
    abc[2] = temp;

    for (int i = 0; i < sizeof(abc) / sizeof(abc[0]); i++) {
        std::cout << abc[i] << " ";

    }

    return 0;
}