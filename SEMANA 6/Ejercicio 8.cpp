#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definición de la estructura Libro
struct Libro {
    string titulo;
    string autor;
    int anoPublicacion;
};

int main() {
    int cantidad_libros;

    // Pedir al usuario la cantidad de libros
    cout << "Ingresa la cantidad de libros: ";
    cin >> cantidad_libros;

    // Crear un vector de estructuras Libro
    vector<Libro> libros(cantidad_libros);

    // Pedir al usuario que ingrese la información de cada libro
    for (int i = 0; i < cantidad_libros; ++i) {
        cout << "Libro " << i + 1 << ":\n";
        cout << "Título: ";
        cin.ignore(); // Limpiar el buffer del teclado antes de leer la cadena
        getline(cin, libros[i].titulo);
        cout << "Autor: ";
        getline(cin, libros[i].autor);
        cout << "Año de publicación: ";
        cin >> libros[i].anoPublicacion;
    }

    // Mostrar la información de todos los libros
    cout << "\nInformación de los libros:\n";
    for (int i = 0; i < cantidad_libros; ++i) {
        cout << "Libro " << i + 1 << ":\n";
        cout << "Título: " << libros[i].titulo << endl;
        cout << "Autor: " << libros[i].autor << endl;
        cout << "Año de publicación: " << libros[i].anoPublicacion << endl << endl;
    }

    return 0;
}