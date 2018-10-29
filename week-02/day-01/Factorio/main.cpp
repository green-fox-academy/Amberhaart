
#include <iostream>
#include <string>

int factorio(int x);


int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   that returns it's input's factorial

    int Roland = 5;

    std::cout << factorio(Roland) << std::endl;


    return 0;
}

int factorio(int x) {

    if (x > 1)
    return x * factorio(x-1);

    else return 1;

}