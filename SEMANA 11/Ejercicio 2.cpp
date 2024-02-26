#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    void mostrarInfo() {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

int main() {
    Persona personaJuan;
    personaJuan.nombre = "Juan";
    personaJuan.edad = 30;

    personaJuan.mostrarInfo();

    return 0;
}