#include <iostream>
#include <vector>
using namespace std;

// Función para mostrar una matriz
void mostrarMatriz(const vector<vector<int>>& matriz) {
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
        cout << elemento << " ";
        }
        cout << endl;
    }
}

// Función para multiplicar dos matrices
vector<vector<int>> multiplicarMatrices(const vector<vector<int>>& matriz1, const vector<vector<int>>& matriz2) {
    int filas1 = matriz1.size();
    int columnas1 = matriz1[0].size();
    int columnas2 = matriz2[0].size();
    vector<vector<int>> resultado(filas1, vector<int>(columnas2, 0));

    for (int i = 0; i < filas1; ++i) {
        for (int j = 0; j < columnas2; ++j) {
            for (int k = 0; k < columnas1; ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}

int main() {
    // Crear las matrices
    vector<vector<int>> matriz1 = {{1, 2, 3},
                                              {4, 5, 6}};
    
    vector<vector<int>> matriz2 = {{7, 8},
                                              {9, 10},
                                              {11, 12}};

    // Multiplicar las matrices
    vector<vector<int>> resultado = multiplicarMatrices(matriz1, matriz2);

    // Mostrar la matriz resultante
    cout << "Matriz resultante de la multiplicación:\n";
    mostrarMatriz(resultado);

    return 0;
}