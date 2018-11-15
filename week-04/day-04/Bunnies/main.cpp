#include <iostream>

// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).

int bunny (int n);

int main() {

    std::cout << bunny(4);

    return 0;
}
int bunny (int n){

    return n*2;
}