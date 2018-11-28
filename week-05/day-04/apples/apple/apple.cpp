#include "apple.h"


std::string getApple(){
    return "apple";
}

int sum (std::vector<int> vector) {
    int counter = 0;
    for (int i = 0; i < vector.size(); i++){
        counter +=  vector[i];
    }
    return counter;
};