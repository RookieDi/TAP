#ifndef MATRICE_H
#define MATRICE_H

#include <vector>

class Matrice {
private:
    int nrLinii;
    int nrColoane;
    std::vector<std::vector<int>> elemente;

public:
    Matrice();
    Matrice(int linii, int coloane);
    Matrice(const Matrice& other);
    ~Matrice();

    Matrice operator+(const Matrice& other) const;
    Matrice operator-(const Matrice& other) const;
    Matrice operator*(const Matrice& other) const;
    Matrice operator/(const Matrice& other) const;
    bool operator>(const Matrice& other) const;
    bool operator<(const Matrice& other) const;
    bool operator>=(const Matrice& other) const;
    bool operator<=(const Matrice& other) const;
    bool operator!=(const Matrice& other) const;
    bool operator==(const Matrice& other) const;

    Matrice& operator=(const Matrice& other);
    Matrice& operator+=(const Matrice& other);
    Matrice& operator-=(const Matrice& other);
    Matrice& operator*=(const Matrice& other);
    Matrice& operator/=(const Matrice& other);
    Matrice& operator++();
    Matrice operator++(int);
    Matrice& operator--();
    Matrice operator--(int);

    std::vector<int>& operator[](int index);
    int getNrLinii() const;
    int getNrColoane() const;
};

#endif // MATRICE_H
