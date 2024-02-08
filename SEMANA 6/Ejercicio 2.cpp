#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<std::string> palabras;
    string palabra;

    cout << "Ingresa varias palabras (termina con 'fin'):\n";
    while (cin >> palabra && palabra != "fin") {
        palabras.push_back(palabra);
    }

    // Concatenar todas las palabras en una única cadena
    string resultado;
    for (const string& p : palabras) {
        resultado += p;
    }

    // Mostrar el resultado
    cout << "La cadena resultante es:\n" << resultado << endl;

    return 0;
}