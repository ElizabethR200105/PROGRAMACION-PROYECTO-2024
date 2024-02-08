#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int contadorA = 0, contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;
    char letra;

    cout << "Ingrese una oración: ";

    // Utilizamos getline para leer una línea completa, incluyendo espacios en blanco.
    string oracion;
    getline(cin, oracion);

    for (char c =oracion)
    {
        letra = tolower(c);

        switch (letra)
        {
        case 'a':
            contadorA++;
            break;
        case 'e':
            contadorE++;
            break;
        case 'i':
            contadorI++;
            break;
        case 'o':
            contadorO++;
            break;
        case 'u':
            contadorU++;
            break;
        }
    }

    cout << "A: " << contadorA << endl;
    cout << "E: " << contadorE << endl;
    cout << "I: " << contadorI << endl;
    cout << "O: " << contadorO << endl;
    cout << "U: " << contadorU << endl;
    cout << "La cantidad total de vocales es: " << contadorA + contadorE + contadorI + contadorO + contadorU << endl;

    return 0;
}


