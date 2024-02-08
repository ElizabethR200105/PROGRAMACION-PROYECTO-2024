#include <iostream>
#include <string>

using namespace std;
string cifradoCesar(string cadena, int clave)
{
    for (int i = 0; i < cadena.length(); i++)
    {
        if (cadena[i] >= 'a' && cadena[i] <= 'z')
        {
            cadena[i] = (cadena[i] - 'a' + clave) % 26 + 'a';
        }
        else if (cadena[i] >= 'A' && cadena[i] <= 'Z')
        {
            cadena[i] = (cadena[i] - 'A' + clave) % 26 + 'A';
        }
    }
    return cadena;
}

int main()
{
    string cadena;
    int clave;

    cout << "Ingrese una cadena: ";
    cin >> cadena;

    cout << "Ingrese una clave: ";
    cin >> clave;

    cout << "La cadena cifrada es: " << cifradoCesar(cadena, clave) << endl;

    return 0;
}

