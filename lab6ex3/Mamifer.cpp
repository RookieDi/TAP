#include "Mamifer.h"
#include <iostream>

Mamifer::Mamifer(const std::string& specie, int varsta, int lungime)
    : Animal(specie, varsta), lungime(lungime) {}

void Mamifer::naste() const {
    std::cout << "Mamiferul de specie " << specie << " naste." << std::endl;
}

int Mamifer::getLungime() const {
    return lungime;
}

void Mamifer::setLungime(int lungime) {
    this->lungime = lungime;
}