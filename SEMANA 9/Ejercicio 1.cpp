#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

struct alumno {
    string nombre;
    int edad;
    int notas[3];
    float promedio;
};

int calcularMayoriaEdad(alumno a) {
    if (a.edad >= 18) {
        return 1;
    } else {
        return 0;
    }
}

float calcularPromedio(alumno a) {
    float suma = 0;
    for (int i = 0; i < 3; ++i) {
        suma += a.notas[i];
    }
    return suma / 3;
}

bool determinarAprobo(alumno a) {
    float promedio = calcularPromedio(a);
    if (promedio >= 11) {
        return true;
    } else {
        return false;
    }
}

bool compararEdades(const alumno& a, const alumno& b) {
    return a.edad > b.edad; // Ordenar de mayor a menor
}

int main() {
    alumno alumnos[2];

    // Solicitar datos de los alumnos
    for (int i = 0; i < 2; ++i) {
        cout << "Ingrese el nombre del alumno " << i+1 << ": ";
        cin >> alumnos[i].nombre;
        cout << "Ingrese la edad del alumno " << i+1 << ": ";
        cin >> alumnos[i].edad;
        cout << "Ingrese las notas del alumno " << i+1 << " (separadas por espacios): ";
        for (int j = 0; j < 3; ++j) {
            cin >> alumnos[i].notas[j];
        }
        alumnos[i].promedio = calcularPromedio(alumnos[i]);
    }

    // Ordenar los alumnos por edad de mayor a menor
    sort(alumnos, alumnos + 2, compararEdades);

   // Mostrar las edades y promedios ordenados
    cout << "\nDatos de los alumnos ordenados por edad de mayor a menor:\n";
    for (int i = 0; i < 3; ++i) {
        cout << "Nombre: " << alumnos[i].nombre << ", Edad: " << alumnos[i].edad << " años, Promedio: " << alumnos[i].promedio << endl;
    }

    return 0;
}
