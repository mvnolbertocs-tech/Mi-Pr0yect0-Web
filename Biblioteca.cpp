#include "Biblioteca.h"
#include <iostream>

void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

void Biblioteca::listarLibros() const {
    for (const auto& libro : libros) {
        libro.mostrarInfo();
        std::cout << "---------------------\n";
    }
}

size_t Biblioteca::numeroDeLibros() const {
    return libros.size();
}