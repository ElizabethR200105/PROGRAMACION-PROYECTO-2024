#include <iostream>
using namespace std;

int main() {
    int totalDias, años, meses, dias;

    cout << "Ingrese el numero total de dias: ";
    cin >> totalDias;

    años = totalDias / 365;
    totalDias %= 365;
    meses = totalDias / 30;
    dias = totalDias % 30;

    cout << "Equivalente a: " << años << " años, " << meses << " meses y " << dias << " dias." <<endl;


    if (meses == 0) {
    cout << "El periodo recae completamente en el primer mes." <<endl;
    } else {
    cout << "El periodo recae parcialmente en el mes " << meses << "."<<endl;
    }

    return 0;
}