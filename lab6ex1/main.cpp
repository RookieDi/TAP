#include <iostream>
#include "Student.h"
#include "Profesor.h"
#include "Angajat.h"

int main() {
    Student student("1234567890123", "John ", "john@google.com", 9);

    std::cout << student.detalii() << std::endl;

    Profesor profesor("9876543210987", "Jane ", "jane@gmail.com", "Matematica");

    std::cout << profesor.detalii() << std::endl;

    Angajat angajat("1122334455667", "Alice ", "alice@yahoo.com", "HR");

    std::cout << angajat.detalii() << std::endl;



    return 0;
}
