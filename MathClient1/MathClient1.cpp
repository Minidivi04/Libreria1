#include <iostream>
#include "MathLibrary.h"

int main() {
    std::string nombre;
    int edad;
    std::string lugarResidencia;

    std::cout << "Ingrese su nombre: ";
    std::cin >> nombre;

    std::cout << "Ingrese su edad: ";
    std::cin >> edad;

    std::cin.ignore(); 
    std::cout << "Ingrese su lugar de residencia: ";
    std::getline(std::cin, lugarResidencia);

    std::string futuro = MathLibrary::adivinarFuturo(nombre, edad, lugarResidencia);
    std::cout << futuro << std::endl;

    return 0;
}
