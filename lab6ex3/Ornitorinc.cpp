#include "Ornitorinc.h"
#include <iostream>

Ornitorinc::Ornitorinc(const std::string& specie, int varsta, int lungime, int nrPene)
    : Mamifer(specie, varsta, lungime), Pasare(specie, varsta, nrPene), Animal(specie, varsta) {}

void Ornitorinc::amfibiu() const {
    std::cout << "Ornitorincul de specie " << Animal::getSpecie() << " este amfibiu." << std::endl;
}

void Ornitorinc::heterotrof() const {
    std::cout << "Ornitorincul de specie " << Animal::getSpecie() << " este heterotrof." << std::endl;
}

void Ornitorinc::naste() const {
    std::cout << "Ornitorincul de specie " << Animal::getSpecie() << " naste." << std::endl;
}

void Ornitorinc::zboara() const {
    std::cout << "Ornitorincul de specie " << Animal::getSpecie() << " zboara." << std::endl;
}
