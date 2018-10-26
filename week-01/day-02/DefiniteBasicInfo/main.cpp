
#include <iostream>

int main(int argc, char* args[]) {

    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean

    std:: string name = "Roland";
    int age = 28;
    double height = 1.88;
    bool married = false;


    std::cout <<"My name is " << name << std::endl;
    std::cout <<"My age in years is " << age << std::endl;
    std::cout <<"My height in meters is " << height << std::endl;

    if (married == false) {
        std::cout <<"I am not married" << std::endl;
    }



    return 0;
}