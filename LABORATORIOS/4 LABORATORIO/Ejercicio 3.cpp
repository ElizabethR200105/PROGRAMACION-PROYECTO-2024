#include <iostream>
using namespace std;

int main() {
    int produccion_total = 0;

    // Solicitar la producción diaria de lunes a sábado
    for (int dia = 1; dia <= 6; ++dia) {
        int produccion_dia;
        cout << "Ingrese la producción del día " << dia << ": ";
        cin >> produccion_dia;
        produccion_total += produccion_dia;
    }

    // Calcular el incentivo
    if (produccion_total >= 100 * 6) { // Si se cumple la producción mínima para toda la semana
        cout << "El operario recibe un incentivo esta semana." << endl;
    } else {
        cout << "El operario no recibe incentivo esta semana." << endl;
    }

    return 0;
}