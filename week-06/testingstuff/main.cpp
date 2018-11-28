#include <iostream>
#include <vector>
#include <map>

int subInt(int num, std::vector<int> vector);

int main() {

    std::vector<int> domino1 = {1, 0, 0, 0};
    std::vector<int> domino2 = {0, 1, 0, 0};
    std::vector<int> domino3 = {0, 0, 1, 0};
    std::vector<int> domino4 = {0, 0, 0, 1};

    std::vector<std::vector<int>> masterDomino = {domino1, domino2, domino3, domino4};

    for (int i = 0; i < masterDomino.size(); ++i) {
            std::cout << std::endl;
        for (int j = 0; j < domino1.size() ; ++j) {
            std::cout << masterDomino[i][j];
        }
    }