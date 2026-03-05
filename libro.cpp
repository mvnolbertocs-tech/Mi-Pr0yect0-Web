#include "Libro.h"
#include <iostream>

Libro::Libro() : titulo(""), autor(""), isbn("") {}

Libro::Libro(const std::string& t, const std::string& a, const std::string& i)
    : titulo(t), autor(a), isbn(i) {}

void Libro::mostrarInfo() const {
    std::cout << "Titulo: " << titulo << "\n";
    std::cout << "Autor: " << autor << "\n";
    std::cout << "ISBN: " << isbn << "\n\n";
}