#include <iostream>
using namespace std;

int main() {
    int num_alumnos;
    double costo_por_alumno;
    double costo_total;

    // Solicitar al usuario el número de alumnos
    cout << "Ingrese el número de alumnos: ";
    cin >> num_alumnos;

    // Calcular el costo por alumno y el costo total del viaje
    if (num_alumnos >= 100) {
        costo_por_alumno = 65.00;
    } else if (num_alumnos >= 50 && num_alumnos <= 99) {
        costo_por_alumno = 70.00;
    } else if (num_alumnos >= 30 && num_alumnos <= 49) {
        costo_por_alumno = 95.00;
    } else {
        costo_por_alumno = 4000.00/num_alumnos; // Si son menos de 30 alumnos
    }

    // Calcular el costo total del viaje
    if (costo_por_alumno != 0) {
        costo_total = costo_por_alumno * num_alumnos;
    } else {
        costo_total = 4000.00;
    }

    // Mostrar el costo por alumno y el costo total del viaje
    cout << "Costo por alumno: S/." << costo_por_alumno << endl;
    cout << "Costo total del viaje: S/." << costo_total << endl;

    return 0;
}