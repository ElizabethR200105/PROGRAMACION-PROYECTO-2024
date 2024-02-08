#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Definir la matriz de strings
    const int filas = 3;
    const int columnas = 3;
    vector<vector<string>> matriz(filas, vector<string>(columnas));

    // Pedir al usuario que ingrese palabras en cada celda de la matriz
    cout << "Ingresa palabras en cada celda de la matriz:\n";
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Ingresa palabras para la celda [" << i << "][" << j << "]: ";
            string palabra;
            while (cin >> palabra && palabra != "*") {
                matriz[i][j] += palabra + " ";
            }
        }
    }

    // Mostrar las palabras concatenadas de cada fila
    cout << "Palabras concatenadas de cada fila:\n";
    for (int i = 0; i < filas; ++i) {
        string fila_concatenada;
        for (int j = 0; j < columnas; ++j) {
            fila_concatenada += matriz[i][j];
        }
        cout << "Fila " << i << ": " << fila_concatenada << endl;
    }

    return 0;
}