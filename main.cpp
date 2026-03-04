#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    string isbn;

public:
   
    Libro();

    
    Libro(string t, string a, string i);

    // Getters
    string getTitulo() const;
    string getAutor() const;
    string getIsbn() const;

    // Setters
    void setTitulo(string t);
    void setAutor(string a);
    void setIsbn(string i);

    
    void mostrarInfo() const;
};

// ===== Implementación =====

// Constructor por defecto
Libro::Libro() {
    titulo = "";
    autor = "";
    isbn = "";
}

// Constructor con parámetros
Libro::Libro(string t, string a, string i) {
    titulo = t;
    autor = a;
    isbn = i;
}

// Getters
string Libro::getTitulo() const {
    return titulo;
}

string Libro::getAutor() const {
    return autor;
}

string Libro::getIsbn() const {
    return isbn;
}

// Setters
void Libro::setTitulo(string t) {
    titulo = t;
}

void Libro::setAutor(string a) {
    autor = a;
}

void Libro::setIsbn(string i) {
    isbn = i;
}

// Mostrar información
void Libro::mostrarInfo() const {
    cout << "----- Libro -----" << endl;
    cout << "Titulo: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "ISBN: " << isbn << endl;
}

// ===== main del proyecto =====

int main() {
    // Objeto 1: Constructor por defecto + setters
    Libro libro1;
    libro1.setTitulo("Las tres cerdas");
    libro1.setAutor("Erick musanbanick");
    libro1.setIsbn("80020");
//123 prueba
    // Objeto 2: Constructor con parámetros
    Libro libro2("la maldicion de los malgabis", "panfila", "332154");

    // Objeto 3: Constructor con parámetros
    Libro libro3("reina valera", "reina valera", "55551");

    // Mostrar información
    libro1.mostrarInfo();
    cout << endl;

    libro2.mostrarInfo();
    cout << endl;

    libro3.mostrarInfo();

    return 0;
}