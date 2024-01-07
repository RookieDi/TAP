#pragma once

#include <string>

class Animal {
protected:
    std::string specie;
    int varsta;

public:
    Animal(const std::string& specie, int varsta);
    virtual ~Animal() {}

    virtual void heterotrof() const = 0;

    const std::string& getSpecie() const;
    void setSpecie(const std::string& specie);
    int getVarsta() const;
    void setVarsta(int varsta);
};


