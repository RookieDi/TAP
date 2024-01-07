#pragma once
#include "Persoana.h"
#include <string>

class Persoana {
protected:
    std::string CNP;
    std::string nume;

public:
    Persoana(const std::string& CNP, const std::string& nume);
    virtual ~Persoana();

    virtual std::string detalii() const = 0;
};
