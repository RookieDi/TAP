#include "matrice.h"

Matrice& Matrice::operator=(const Matrice& other) {
    if (this != &other) {
        nrLinii = other.nrLinii;
        nrColoane = other.nrColoane;
        elemente = other.elemente;
    }
    return *this;
}

Matrice Matrice::operator+(const Matrice& other) const {
    if (nrLinii != other.nrLinii || nrColoane != other.nrColoane) {
     
    }

    Matrice result(nrLinii, nrColoane);
    for (int i = 0; i < nrLinii; ++i) {
        for (int j = 0; j < nrColoane; ++j) {
            result.elemente[i][j] = elemente[i][j] + other.elemente[i][j];
        }
    }
    return result;
}

Matrice Matrice::operator-(const Matrice& other) const {
    if (nrLinii != other.nrLinii || nrColoane != other.nrColoane) {
      
    }

    Matrice result(nrLinii, nrColoane);
    for (int i = 0; i < nrLinii; ++i) {
        for (int j = 0; j < nrColoane; ++j) {
            result.elemente[i][j] = elemente[i][j] - other.elemente[i][j];
        }
    }
    return result;
}

Matrice Matrice::operator*(const Matrice& other) const {
    if (nrColoane != other.nrLinii) {
        
    }

    Matrice result(nrLinii, other.nrColoane);
    for (int i = 0; i < nrLinii; ++i) {
        for (int j = 0; j < other.nrColoane; ++j) {
            result.elemente[i][j] = 0;
            for (int k = 0; k < nrColoane; ++k) {
                result.elemente[i][j] += elemente[i][k] * other.elemente[k][j];
            }
        }
    }
    return result;
}

Matrice Matrice::operator/(const Matrice& other) const {
    return Matrice(); 
}

bool Matrice::operator==(const Matrice& other) const {
    if (nrLinii != other.nrLinii || nrColoane != other.nrColoane) {
        return false;
    }

    for (int i = 0; i < nrLinii; ++i) {
        for (int j = 0; j < nrColoane; ++j) {
            if (elemente[i][j] != other.elemente[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool Matrice::operator!=(const Matrice& other) const {
    return !(*this == other);
}

Matrice& Matrice::operator+=(const Matrice& other) {
    if (nrLinii != other.nrLinii || nrColoane != other.nrColoane) {
       
    }

    for (int i = 0; i < nrLinii; ++i) {
        for (int j = 0; j < nrColoane; ++j) {
            elemente[i][j] += other.elemente[i][j];
        }
    }
    return *this;
}

Matrice& Matrice::operator-=(const Matrice& other) {
    if (nrLinii != other.nrLinii || nrColoane != other.nrColoane) {
       
    }

    for (int i = 0; i < nrLinii; ++i) {
        for (int j = 0; j < nrColoane; ++j) {
            elemente[i][j] -= other.elemente[i][j];
        }
    }
    return *this;
}

Matrice& Matrice::operator*=(const Matrice& other) {
    
    return *this;
}

Matrice& Matrice::operator/=(const Matrice& other) {
  
    return *this;
}

Matrice& Matrice::operator++() {
    
    return *this;
}

Matrice Matrice::operator++(int) {
    
    return *this;
}

Matrice& Matrice::operator--() {
    
    return *this;
}

Matrice Matrice::operator--(int) {
    
    return *this;
}

std::vector<int>& Matrice::operator[](int index) {
  
    return elemente[index];
}

bool Matrice::operator>(const Matrice& other) const {
    
    return false;
}

bool Matrice::operator<(const Matrice& other) const {
    
    return false;
}

bool Matrice::operator>=(const Matrice& other) const {
    
    return false;
}

bool Matrice::operator<=(const Matrice& other) const {
    
    return false;
}
int Matrice::getNrLinii() const {
    return nrLinii;
}

int Matrice::getNrColoane() const {
    return nrColoane;
}