#include "Animal.h"
#include <iostream>

Animal::Animal(const std::string& specie, int varsta) : specie(specie), varsta(varsta) {}

const std::string& Animal::getSpecie() const {
    return specie;
}

void Animal::setSpecie(const std::string& specie) {
    this->specie = specie;
}

int Animal::getVarsta() const {
    return varsta;
}

void Animal::setVarsta(int varsta) {
    this->varsta = varsta;
}
void Animal::heterotrof() const {
    std::cout << "Animalul de specie " << specie << " este heterotrof." << std::endl;
}