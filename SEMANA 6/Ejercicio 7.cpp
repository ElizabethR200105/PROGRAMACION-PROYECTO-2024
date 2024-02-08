#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definición de la estructura Alumno
struct Alumno {
    string nombre;
    int edad;
    float calificacion;
};

int main() {
    int cantidad_alumnos;

    // Pedir al usuario la cantidad de alumnos
    cout << "Ingresa la cantidad de alumnos: ";
    cin >> cantidad_alumnos;

    // Crear un vector de estructuras Alumno
    vector<Alumno> alumnos(cantidad_alumnos);

    // Pedir al usuario que ingrese la información de cada alumno
    for (int i = 0; i < cantidad_alumnos; ++i) {
        cout << "Alumno " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin >> alumnos[i].nombre;
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cout << "Calificación: ";
        cin >> alumnos[i].calificacion;
    }

    // Mostrar la información de todos los alumnos
    cout << "\nInformación de los alumnos:\n";
    for (int i = 0; i < cantidad_alumnos; ++i) {
        cout << "Alumno " << i + 1 << ":\n";
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Calificación: " << alumnos[i].calificacion << endl << endl;
    }

    return 0;
}