#include <iostream>
#include <vector>
#include "Punct2D.h"
#include "Punct3D.h"

int main() {
    int n;
    std::cout << "Introduceți numărul de puncte 2D: ";
    std::cin >> n;

    std::vector<Punct2D> puncte(n);
    std::cout << "Introduceți coordonatele x și y pentru fiecare punct 2D:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> puncte[i];
    }

    // Afisare puncte 2D si distantele dintre ele
    std::cout << "\nPunctele 2D introduse sunt:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "Punct " << i + 1 << ": " << puncte[i] << "\n";
        for (int j = i + 1; j < n; ++j) {
            std::cout << "Distanța dintre punctul " << i + 1 << " și punctul " << j + 1 << " este: "
                << puncte[i].distanta(puncte[j]) << "\n";
        }
    }

    return 0;
}
