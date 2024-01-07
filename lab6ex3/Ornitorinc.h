#pragma once
#include "Mamifer.h"
#include "Pasare.h"

class Ornitorinc : public Mamifer, public Pasare {
public:
    Ornitorinc(const std::string& specie, int varsta, int lungime, int nrPene);
    ~Ornitorinc() {}

    void amfibiu() const ;
    void heterotrof() const;
    void naste() const;
    void zboara() const;
};
