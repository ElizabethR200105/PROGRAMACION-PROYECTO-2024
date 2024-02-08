#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Definición de la estructura Estudiante
const int MAX_CALIFICACIONES = 5; // Máximo de calificaciones por estudiante
struct Estudiante {
    string nombre;
    int calificaciones[MAX_CALIFICACIONES];
    int cantidadCalificaciones;
};

// Función para calcular el promedio de calificaciones de un estudiante
float calcularPromedio(const Estudiante& estudiante) {
    int suma = 0;
    for (int i = 0; i < estudiante.cantidadCalificaciones; ++i) {
        suma += estudiante.calificaciones[i];
    }
    return static_cast<float>(suma) / estudiante.cantidadCalificaciones;
}

int main() {
    int cantidad_estudiantes;

    // Pedir al usuario la cantidad de estudiantes
    cout << "Ingresa la cantidad de estudiantes: ";
    cin >> cantidad_estudiantes;

    // Crear un vector de estructuras Estudiante
    vector<Estudiante> estudiantes(cantidad_estudiantes);

    // Pedir al usuario que ingrese la información de cada estudiante
    for (int i = 0; i < cantidad_estudiantes; ++i) {
        cout << "Estudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;

        // Pedir al usuario que ingrese las calificaciones del estudiante
        cout << "Cantidad de calificaciones: ";
        cin >> estudiantes[i].cantidadCalificaciones;
        cout << "Ingresa las calificaciones del estudiante:\n";
        for (int j = 0; j < estudiantes[i].cantidadCalificaciones; ++j) {
            cout << "Calificación " << j + 1 << ": ";
            cin >> estudiantes[i].calificaciones[j];
        }
    }

    // Mostrar el promedio de calificaciones para cada estudiante
    cout << "\nPromedio de calificaciones de cada estudiante:\n";
    for (int i = 0; i < cantidad_estudiantes; ++i) {
        cout << "Estudiante: " << estudiantes[i].nombre << ", ";
        cout << "Promedio: " << calcularPromedio(estudiantes[i]) << endl;
    }

    return 0;
}