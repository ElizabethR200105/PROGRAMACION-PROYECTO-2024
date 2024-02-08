#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numeros;
    int cantidad;

    cout << "Ingresa la cantidad de números: ";
    cin >> cantidad;

    cout << "Ingresa los números:\n";
    for (int i = 0; i < cantidad; ++i) {
        int numero;
        cin >> numero;
        numeros.push_back(numero);
    }

    // Ordenar el vector
    sort(numeros.begin(), numeros.end());

    // Mostrar el vector ordenado
    cout << "El vector ordenado es:\n";
    for (int num : numeros) {
    cout << num << " ";
    }
    cout << endl;

    return 0;
}