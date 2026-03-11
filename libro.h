#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>

class Libro {

private:
    std::string titulo;
    std::string autor;
    std::string isbn;

public:

    // Constructor
    Libro(std::string t, std::string a, std::string i){
        titulo = t;
        autor = a;
        isbn = i;
    }

    // Getters
    std::string getTitulo() const{
        return titulo;
    }

    std::string getAutor() const{
        return autor;
    }

    std::string getIsbn() const{
        return isbn;
    }

    // Mostrar información
    void mostrarInfo() const{
        std::cout << "Titulo: " << titulo << std::endl;
        std::cout << "Autor: " << autor << std::endl;
        std::cout << "ISBN: " << isbn << std::endl;
        std::cout << "-------------------------" << std::endl;
    }

};

#endif