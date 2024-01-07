#include "Pasare.h"
#include <iostream>

Pasare::Pasare(const std::string& specie, int varsta, int nrPene)
    : Animal(specie, varsta), nrPene(nrPene) {}

void Pasare::zboara() const {
    std::cout << "Pasarea de specie " << specie << " zboara." << std::endl;
}

int Pasare::getNrPene() const {
    return nrPene;
}

void Pasare::setNrPene(int nrPene) {
    this->nrPene = nrPene;
}
