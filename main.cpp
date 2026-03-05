#include <iostream>
#include "Biblioteca.h"

int main() {
    Biblioteca bib;

    bib.agregarLibro(Libro("Cien años de soledad", "Gabriel García Márquez", "978-0307474728"));
    bib.agregarLibro(Libro("El principito", "Antoine de Saint-Exupéry", "978-8499086637"));

    std::cout << "Libros en la biblioteca (" << bib.numeroDeLibros() << "):\n\n";
    bib.listarLibros();

    return 0;
}