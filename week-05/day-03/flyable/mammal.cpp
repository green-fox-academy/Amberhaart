#include "mammal.h"

Mammal::Mammal() {
    _name = "Mammal";
}
Mammal::Mammal(std::string name) {
    _name = name;
}

std::string Mammal::breed() {
    return "pushing miniature versions out.";
}

std::string Mammal::getName() {
    return _name;
}
