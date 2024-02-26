#include <iostream>

using namespace std;

// Función para calcular el promedio
float calcularPromedio(float *notas, int cantidad) {
    float suma = 0;
    for (int i = 0; i < cantidad; ++i) {
        suma += *(notas + i); // Suma de las notas a través de punteros
    }
    return suma / cantidad; // Calcula el promedio
}

int main() {
    const int cantidadNotas = 10;
    float notas[cantidadNotas];
    
    // Solicitar las notas al usuario
    cout << "Ingrese las 10 notas:\n";
    for (int i = 0; i < cantidadNotas; ++i) {
        cout << "Nota " << i + 1 << ": ";
        cin >> *(notas + i); // Leer las notas a través de punteros
    }
    
    // Calcular el promedio
    float promedio = calcularPromedio(notas, cantidadNotas);
    
    // Mostrar el resultado
    cout << "El promedio de las notas ingresadas es: " << promedio << endl;
    
    return 0;
}