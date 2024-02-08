#include <iostream>
using namespace std;

int main() {
    double velocidadKmPorHora, velocidadMetrosPorSegundo;

    cout << "Ingrese la velocidad del automovil en kilometros por hora: ";
    cin >> velocidadKmPorHora;

    velocidadMetrosPorSegundo = velocidadKmPorHora * 0.277778;

    cout << "La velocidad del automovil es: " << velocidadMetrosPorSegundo << " metros por segundo." <<endl;

    return 0;
}