#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Create a program that writes this line 100 times:
    // "I won't cheat on the exam!"


   for (int i = 0; i < 100; i++) {

       std::cout << "I won't cheat on the exam!" << std::endl;

   }


/*    std::cout << "\n" << std::endl;

   int x = 0;

   while (x < 100) {

        std::cout << "I don't cheat on any exams at all." << std::endl;

        x++;

   }                                                        */



    return 0;
}