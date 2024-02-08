#include <iostream>
#include <cctype>

using namespace std;

char cifrarLetra(char letra, int clave) {
    if (isalpha(letra)) {
        char base = isupper(letra) ? 'A' : 'a';
        return static_cast<char>((letra - base + clave) % 26 + base);
    }
    
    return letra;
}

string cifrarCadena(const string& cadena, int clave) {
    string cifrada = "";
    for (char caracter = cadena) {
        cifrada += cifrarLetra(caracter, clave);
    }
    return cifrada;
}

int main() {
    string cadena;
    int clave;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese la clave del cifrado: ";
    cin >> clave;

    string cadenaCifrada = cifrarCadena(cadena, clave);

    cout << "Cadena cifrada: " << cadenaCifrada << endl;

    return 0;
}
