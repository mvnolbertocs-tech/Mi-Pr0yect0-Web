#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    std::string isbn;

public:
    Libro();  // por defecto
    Libro(const std::string& t, const std::string& a, const std::string& i);

    void mostrarInfo() const;
};

#endif