#pragma once
#include "Animal.h"

#include "Animal.h"

class Mamifer : virtual public Animal {
private:
    int lungime;

public:
    Mamifer(const std::string& specie, int varsta, int lungime);
    ~Mamifer() {}

    void naste() const;
    int getLungime() const;
    void setLungime(int lungime);
};


