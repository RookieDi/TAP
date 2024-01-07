#pragma once

#include "Animal.h"

class Pasare : virtual public Animal {
private:
    int nrPene;

public:
    Pasare(const std::string& specie, int varsta, int nrPene);
    ~Pasare() {}

    void zboara() const;
    int getNrPene() const;
    void setNrPene(int nrPene);
};

