#include "reptile.h"

Reptile::Reptile(){
    _name = "Reptile";
}

Reptile::Reptile(std::string name){
    _name = name;
}

std::string Reptile::breed() {
    return "laying eggs.";
}

std::string Reptile::getName() {
    return _name;
}