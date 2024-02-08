#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

bool esPrimo(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

vector<int> numerosPrimos(int inicio, int fin)
{
    vector<int> primos;

    for (int i = inicio; i <= fin; i++)
    {
        if (esPrimo(i))
        {
            primos.push_back(i);
        }
    }

    return primos;
}

int main()
{
    string inicioStr, finStr;

    for (;;)
    {
        cout << "Ingrese el inicio del rango: ";
        getline(cin, inicioStr);

        cout << "Ingrese el fin del rango: ";
        getline(cin, finStr);

        stringstream ss_inicio(inicioStr), ss_fin(finStr);
        int inicio, fin;

        if (!(ss_inicio >> inicio) || !(ss_fin >> fin))
        {
            cout << "Entrada inválida. Por favor, ingrese números enteros.\n";
            continue; 
        }

        vector<int> primos = numerosPrimos(inicio, fin);

        cout << "Los numeros primos en el rango son: ";
        for (int i = 0; i < primos.size(); i++)
        {
            cout << primos[i] << " ";
        }

        cout << endl;

        break; 
    }

    return 0;
}


