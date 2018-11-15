#include <iostream>
#include <string>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

int main() {

    std::string text = "xxaxx";

    std::replace(text.begin(), text.end(), 'x', 'y');

    std::cout << text << std::endl;

    return 0;
}