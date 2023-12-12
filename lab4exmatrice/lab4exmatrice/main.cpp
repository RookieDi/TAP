#include "matrice.h"
#include <iostream>

int main() {
    // Exemplu de utilizare a clasei Matrice
    Matrice A(2, 2);
    A[0][0] = 1;
    A[0][1] = 2;
    A[1][0] = 3;
    A[1][1] = 4;

    Matrice B(2, 2);
    B[0][0] = 5;
    B[0][1] = 6;
    B[1][0] = 7;
    B[1][1] = 8;

    Matrice C = A + B;
    Matrice D = A - B;
    Matrice E = A * B;

    std::cout << "Matricea A:" << std::endl;
    for (int i = 0; i < A.getNrLinii(); ++i) {
        for (int j = 0; j < A.getNrColoane(); ++j) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matricea B:" << std::endl;
    for (int i = 0; i < B.getNrLinii(); ++i) {
        for (int j = 0; j < B.getNrColoane(); ++j) {
            std::cout << B[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Suma matricelor A si B:" << std::endl;
    for (int i = 0; i < C.getNrLinii(); ++i) {
        for (int j = 0; j < C.getNrColoane(); ++j) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Diferenta matricelor A si B:" << std::endl;
    for (int i = 0; i < D.getNrLinii(); ++i) {
        for (int j = 0; j < D.getNrColoane(); ++j) {
            std::cout << D[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Produsul matricelor A si B:" << std::endl;
    for (int i = 0; i < E.getNrLinii(); ++i) {
        for (int j = 0; j < E.getNrColoane(); ++j) {
            std::cout << E[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
