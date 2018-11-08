#include <iostream>
#include <string>

void printParams (std:: string x);
void printParams (std:: string x, std:: string y);
void printParams (std:: string x, std:: string y, std:: string z);
void printParams (std:: string x, std:: string y, std:: string z, std:: string w);

int main(int argc, char* args[]) {

    // - Create a function called `printParams`
    //   which prints the input String parameters
    // - It can have any number of parameters

    // Examples
    // printParams("first")
    // printParams("first", "second")
    // printParams("first", "second", "third", "fourh")
    // ...

    std::string a;
    std::string b;
    std::string c;
    std::string d;

    printParams(a);
    printParams(a, b);
    printParams(a, b, c);
    printParams(a, b, c, d);

    return 0;
}

void printParams (std:: string x){

    std::cout << "I" << std::endl;

}
void printParams (std:: string x, std:: string y){
    std::cout << "will" << std::endl;

}
void printParams (std:: string x, std:: string y, std:: string z){
    std::cout << "not" << std::endl;

}
void printParams (std:: string x, std:: string y, std:: string z, std:: string w){
    std::cout << "break" << std::endl;

}