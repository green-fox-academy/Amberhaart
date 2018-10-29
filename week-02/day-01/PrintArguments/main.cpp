#include <iostream>
#include <string>


void printParams(std::string one);
void printParams(std::string one, std::string two);
void printParams(std::string one, std::string two, std::string three);
void printParams(std::string one, std::string two, std::string three, std::string four);


int main(int argc, char* args[]) {

    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")
    // ...

    std::string first = "Hi";
    std::string second = "My name is";
    std::string third = "Slim";
    std::string forth = "Shady";


    printParams(first);
    printParams(first, second);
    printParams(first, second, third);
    printParams(first, second, third, forth);

    return 0;
}


void printParams(std::string one) {
    std::cout << one << std::endl;
}

void printParams(std::string one, std::string two){
    std::cout << one << std::endl;
    std::cout << two << std::endl;

}
void printParams(std::string one, std::string two, std::string three){
    std::cout << one << std::endl;
    std::cout << two << std::endl;
    std::cout << three << std::endl;
}

void printParams(std::string one, std::string two, std::string three, std::string four){
    std::cout << one << std::endl;
    std::cout << two << std::endl;
    std::cout << three << std::endl;
    std::cout << four << std::endl;
}