#include <iostream>
#include <cmath>
using namespace std;

// Función para calcular el área de un triángulo usando la fórmula de Herón
double calcularArea(double lado1, double lado2, double lado3) {
    double semiperimetro = (lado1 + lado2 + lado3) / 2;
    return sqrt(semiperimetro * (semiperimetro - lado1) * (semiperimetro - lado2) * (semiperimetro - lado3));
}

int main() {
    double lado1, lado2, lado3;

    // Solicitar al usuario los tres lados del triángulo
    cout << "Ingrese la longitud del lado 1 del triángulo: ";
    cin >> lado1;
    cout << "Ingrese la longitud del lado 2 del triángulo: ";
    cin >> lado2;
    cout << "Ingrese la longitud del lado 3 del triángulo: ";
    cin >> lado3;

    // Calcular el área del triángulo
    double area = calcularArea(lado1, lado2, lado3);

    // Identificar el tipo de triángulo
    if (lado1 == lado2 && lado2 == lado3) {
        cout << "El triángulo es equilátero." << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "El triángulo es isósceles." << endl;
    } else {
        cout << "El triángulo es escaleno." << endl;
    }

    // Mostrar el área del triángulo
    cout << "El área del triángulo es: " << area << endl;

    return 0;
}