#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have

    int chicken = 0;
    int pig = 0;

    std::cout <<"Hi, how many chicken are on your farm? ";
    std::cin >> chicken;
    std::cout <<"And how many pigs? ";
    std::cin >> pig ;

    int ChickenLegs = chicken * 2;
    int PigLegs = pig * 4;
    int AllLegs = ChickenLegs + PigLegs;

    std::cout <<"That means you have " << AllLegs << " animal legs on your farm!" << std::endl;

    return 0;
}