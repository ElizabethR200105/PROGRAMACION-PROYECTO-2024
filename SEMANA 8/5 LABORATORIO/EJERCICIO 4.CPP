//4. Crea una lista de numeros pares e impares

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numerosPares;
    vector<int> numerosImpares;

    // Llenar las listas con números pares e impares
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            numerosPares.push_back(i);
        } else {
            numerosImpares.push_back(i);
        }
    }

    // Mostrar los números pares
    cout << "Números pares: ";
    for (int numero : numerosPares) {
    cout << numero << " ";
    }
    cout << "\n";

    // Mostrar los números impares
    cout << "Números impares: ";
    for (int numero : numerosImpares) {
        cout << numero << " ";
    }
    cout << "\n";

    return 0;
}