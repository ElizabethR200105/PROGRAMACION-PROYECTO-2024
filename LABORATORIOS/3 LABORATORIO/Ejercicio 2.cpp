#include <iostream>
#include <string>
using namespace std;

int main() {
    char nota;
 
    cout << "Ingrese la nota alfanumerica (A, B, C, D, E): ";
    cin >> nota;

    nota = toupper(nota);

    switch (nota) {
        case 'A':
            cout << "Rango de notas: 19 - 18" <<endl;
            break;
        case 'B':
            cout << "Rango de notas: 17 - 14" <<endl;
            break;
        case 'C':
            cout << "Rango de notas: 14 - 11" <<endl;
            break;
        case 'D':
            cout << "Rango de notas: 10 - 5" <<endl;
            break;
        case 'E':
            cout << "Rango de notas: 5 - 0" <<endl;
            break;
        default:
            cout << "Nota no valida. Use A, B, C, D o E." <<endl;
            break;
    }

    return 0;
}