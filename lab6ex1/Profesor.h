#pragma once
#include "Persoana.h"

class Profesor : public Persoana {
private:
    std::string email;
    std::string materie;

public:
    Profesor(const std::string& CNP, const std::string& nume, const std::string& email, const std::string& materie);
    ~Profesor();

    std::string getMaterie() const;
    std::string detalii() const override;
};

