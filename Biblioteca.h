#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include <cstddef>
#include "Libro.h"

class Biblioteca {
private:
    std::vector<Libro> libros;

public:
    void agregarLibro(const Libro& libro);
    void listarLibros() const;
    size_t numeroDeLibros() const;
};

#endif