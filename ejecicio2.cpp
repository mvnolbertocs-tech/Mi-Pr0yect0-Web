#include <iostream>
#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    std::string isbn;

public:
    
    Libro(std::string t, std::string a, std::string i);

   
    void mostrarInfo() const;
    std::string getIsbn() const;
};


Libro::Libro(std::string t, std::string a, std::string i)
    : titulo(t), autor(a), isbn(i) {}

void Libro::mostrarInfo() const {
    std::cout << "Título: " << titulo << "\n";
    std::cout << "Autor: " << autor << "\n";
    std::cout << "ISBN: " << isbn << "\n";
}

std::string Libro::getIsbn() const {
    return isbn;
}

int main() {
    
    Libro l1("Cien años de soledad", "Gabriel García Márquez", "978-0307474728");

    l1.mostrarInfo();

    std::cout << "\nSolo ISBN (usando getIsbn): " << l1.getIsbn() << "\n";
    return 0;
}