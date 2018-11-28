#include <iostream>

int* findMinimum(int array[], int size);

int main() {
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};

    int size = sizeof(numbers) / sizeof(int);

    std::cout << findMinimum(numbers,size) << std::endl;
    std::cout << *findMinimum(numbers,size);


    return 0;
}

int* findMinimum(int array[], int size){
    int minimum = array[0];
    for (int i = 0; i < size; ++i) {
        if (array[i] < minimum){
            minimum = array[i];
        }
    }
    return &minimum;
}