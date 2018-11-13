#include <iostream>
#include "postit.h"

int main() {

    PostIt post1("orange", "Idea1", "blue");
    PostIt post2("pink", "Awesome!", "black");
    PostIt post3("yellow", "Superb", "green");

    std::cout << "A " << post1.getBackgroundColor() << " note saying " << post1.getText() << " in " << post1.getTextColor() << " text." << std::endl;
    std::cout << "A " << post2.getBackgroundColor() << " note saying " << post2.getText() << " in " << post2.getTextColor() << " text." << std::endl;
    std::cout << "A " << post3.getBackgroundColor() << " note saying " << post3.getText() << " in " << post3.getTextColor() << " text." << std::endl;

    return 0;
}