#include <iostream>
#include <string>

using namespace std;

class Coche {
public:
    string marca;
    int año;

    void mostrarInfo() {
        cout << "Marca: " << marca << ", Año: " << año << endl;
    }
};

int main() {
    Coche cocheToyota;
    cocheToyota.marca = "Toyota";
    cocheToyota.año = 2022;

    cocheToyota.mostrarInfo();

    return 0;
}