#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<char> caracteres;
    char caracterBuscado;
    int contador = 0;

    // Llenar el vector de caracteres
    cout << "Ingresa una secuencia de caracteres (termina con '*'):\n";
    char caracter;
    while (cin >> caracter && caracter != '*') {
        caracteres.push_back(caracter);
    }

    // Pedir al usuario que ingrese el carácter a buscar
    cout << "Ingresa un carácter para buscar su frecuencia: ";
    cin >> caracterBuscado;

    // Contar cuántas veces aparece el carácter en el vector
    for (char c : caracteres) {
        if (c == caracterBuscado) {
            contador++;
        }
    }

    // Mostrar el resultado
    cout << "El carácter '" << caracterBuscado << "' aparece " << contador << " veces en el vector." << endl;

    return 0;
}