#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create (dynamically) a two dimensional array
    //   with the following matrix. Use a loop!
    //   by dynamically, we mean here that you can change the size of the matrix
    //   by changing an input value or a parameter or this combined
    //
    //   1 0 0 0
    //   0 1 0 0
    //   0 0 1 0
    //   0 0 0 1
    //
    // - Print this two dimensional array to the output

    int array1[4] {1, 0, 0, 0};
    int array2[4] {0, 1, 0, 0};
    int array3[4] {0, 0, 1, 0};
    int array4[4] {0, 0, 0, 1};

    int arrayOfArrays[4][4] = {{1, 0, 0, 0}, {0, 1, 0, 0}, {0, 0, 1, 0}, {0, 0, 0, 1}};


    for (int i = 0; i < sizeof(arrayOfArrays) / sizeof(array1); ++i) {
        for (int j = 0; j < sizeof(array1) / sizeof(int); ++j) {
            std::cout << arrayOfArrays[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}