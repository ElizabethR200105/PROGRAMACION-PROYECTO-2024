#include <iostream>
#include <string>

using namespace std;

class Libro {
public:
    string titulo;
    string autor;

    void mostrarInfo() {
        cout << "Título: " << titulo << ", Autor: " << autor << endl;
    }
};

int main() {
    Libro libroHarryPotter;
    libroHarryPotter.titulo = "Harry Potter y la piedra filosofal";
    libroHarryPotter.autor = "J.K. Rowling";

    libroHarryPotter.mostrarInfo();

    return 0;
}