#include <iostream>

using namespace std;

int **calcularMatrizTranspuesta(int matriz[5][5], int filas)
{
    int **matrizTranspuesta = new int *[filas];
    for (int i = 0; i < filas; i++)
    {
        matrizTranspuesta[i] = new int[filas];
        for (int j = 0; j < filas; j++)
        {
            matrizTranspuesta[i][j] = matriz[j][i];
        }
    }
    return matrizTranspuesta;
}

void imprimirMatriz(int **matriz, int filas)
{
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void liberarMemoria(int **matriz, int filas)
{
    for (int i = 0; i < filas; i++)
    {
        delete[] matriz[i];
    }
    delete[] matriz;
}

int main()
{
    int matriz[5][5];
    int filas;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;

    cout << "Ingrese los elementos de la matriz: " << endl;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < filas; j++)
        {
            cin >> matriz[i][j];
        }
    }

    int **matrizTranspuesta = calcularMatrizTranspuesta(matriz, filas);

    cout << "La matriz transpuesta es: " << endl;

    imprimirMatriz(matrizTranspuesta, filas);

    liberarMemoria(matrizTranspuesta, filas);

    return 0;
}

