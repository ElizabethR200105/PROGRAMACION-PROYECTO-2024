#include <iostream>
#include <string>

using namespace std;

bool esPalindromo(string palabra)
{
    int i = 0;
    int j = palabra.length() - 1;

    while (i < j)
    {
        if (palabra[i] != palabra[j])
        {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main()
{
    string palabra;
cout << "Ingrese una palabra: ";
    cin >> palabra;

    if (esPalindromo(palabra))
    {
        cout << "La palabra es un palindromo." << endl;
    }
    else
    {
        cout << "La palabra no es un palindromo." << endl;
    }

    return 0;
}

