#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    string isbn;

public:
    Libro(const string& t, const string& a, const string& i)
        : titulo(t), autor(a), isbn(i) {}

    void mostrarInfo() const {
        cout << "Título: " << titulo << "\n";
        cout << "Autor: " << autor << "\n";
        cout << "ISBN: " << isbn << "\n\n";
    }
};

int main() {
    vector<Libro> misLibros;

    // emplace_back construye el objeto Libro directo dentro del vector
    misLibros.emplace_back("1984", "George Orwell", "978-0451524935");
    misLibros.emplace_back("Dune", "Frank Herbert", "978-0441172719");

    // Mostrar todos usando range-based for
    for (const auto& libro : misLibros) {
        libro.mostrarInfo();
    }

    return 0;
}
//67