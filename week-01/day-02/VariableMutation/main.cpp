#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    int a = 3;
    // make the "a" variable's value bigger by 10
    a += 10;

    std::cout << a << std::endl;

    int b = 100;
    // make b smaller by 7

    b -= 7;

    std::cout << b << std::endl;

    int c = 44;
    // please double c's value

    c *= 2;

    std::cout << c << std::endl;

    int d = 125;
    // please divide by 5 d's value

    d /= 5;

    std::cout << d << std::endl;

    int e = 8;
    // please cube of e's value

    e *= e;

    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 345;
    // tell if f1 is bigger than f2 (print as a boolean)

        if (f1 > f2) {
    std::cout << "f1 is bigger than f2" << std::endl;
    }
        else {
            std::cout << "f2 is bigger than f1" << std::endl;
    }

    int g1 = 350;
    int g2 = 200;
    // tell if the double of g2 is bigger than g1 (print as a boolean)

    g2 *= 2;
        if (g2 > g1) {
            std::cout <<"The double of g2 is bigger than g1" << std::endl;
        }  else {
                std::cout <<"The double of g2 is not bigger than g1" << std::endl;
            }


    int h = 135798745;
    // tell if it has 11 as a divisor (print as a boolean)

    int h1 = (h % 11);

        if (h1 == 0) {
            std::cout << h <<" is dividable by 11" << std::endl;
        }
            else {
            std::cout << h <<" is not dividable by 11" << std::endl;
            }

    int i1 = 10;
    int i2 = 3;
    // tell if i1 is higher than i2 squared and smaller than i2 cubed (print as a boolean)

    int i2a = i2;
        i2a *= i2a;

    int i2b = i2a;
        i2b *= i2;

        if (i1 < i2a) {

    std::cout << "i1 is smaller than i2 squared" << std::endl;

        }
         else if (i1 > i2a && i1 < i2b) {

            std::cout << "i1 is bigger than i2 squared but smaller than i2 cubed" << std::endl;
        }
            else {

            std::cout << "i1 is bigger than i2 cubed" << std::endl;

            }

    int j = 1521;
    // tell if j is dividable by 3 or 5 (print as a boolean)

    int j1 = (j % 3);
    int j2 = (j % 5);

         if (j1 == 0) {

            std::cout << j << " is dividable by 3" << std::endl;
         } else {
             std::cout << j << " is not dividable by 3" << std::endl;
         }

         if (j2 == 0) {

             std::cout << j << " is dividable by 5" << std::endl;
         } else {
             std::cout << j << " is not dividable by 5" << std::endl;
         }


    std::string k = "Apple";
    //fill the k variable with its content 4 times


    std::cout << k << k << k << k << k << std::endl;

    return 0;
}