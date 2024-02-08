#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numeros[4];

    for (int i = 0; i < 4; ++i) {
        cout << "Ingrese el numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    sort(numeros, numeros + 4);

    cout << "Numeros ordenados de menor a mayor: ";
    for (int i = 0; i < 4; ++i) {
    cout << numeros[i] << " ";
    }

return 0;
}
