#pragma once
#include "Persoana.h"

class Student : public Persoana {
private:
    std::string email;
    int nota;

public:
    Student(const std::string& CNP, const std::string& nume, const std::string& email, int nota);
    ~Student();

    int getNota() const;
    std::string detalii() const override;
};

