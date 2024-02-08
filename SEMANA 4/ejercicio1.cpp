#include <iostream>

using namespace std;

int main() {
    const int n = 10;  
    int numeros[n];
    int suma = 0;

    cout << "Ingrese 10 numeros enteros:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    double promedio = static_cast<double>(suma) / n;

    int mayoresQuePromedio = 0;
    for (int i = 0; i < n; ++i) {
        if (numeros[i] > promedio) {
            mayoresQuePromedio++;
        }
    }

    cout << "El promedio de los numeros ingresados es: " << promedio << endl;
    cout << "Numero de elementos mayores que el promedio: " << mayoresQuePromedio << endl;

    return 0;
}
