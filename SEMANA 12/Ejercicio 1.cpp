#include <iostream>
#include <cmath>

using namespace std;

class Triangulo {
private:
    float lado1, lado2, lado3;

public:
    // Constructor
    Triangulo(float l1, float l2, float l3) {
        lado1 = l1;
        lado2 = l2;
        lado3 = l3;
    }

    // Getters
    float getLado1() {
        return lado1;
    }

    float getLado2() {
        return lado2;
    }

    float getLado3() {
        return lado3;
    }

    // Setters
    void setLado1(float l1) {
        lado1 = l1;
    }

    void setLado2(float l2) {
        lado2 = l2;
    }

    void setLado3(float l3) {
        lado3 = l3;
    }

    // Método para determinar el tipo de triángulo
    string tipoTriangulo() {
        if (lado1 == lado2 && lado2 == lado3) {
            return "Equilátero";
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            return "Isósceles";
        } else {
            return "Escaleno";
        }
    }

    // Método para calcular el área del triángulo
    float calcularArea() {
        float s = (lado1 + lado2 + lado3) / 2;
        return sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
    }

    // Método para calcular el perímetro del triángulo
    float calcularPerimetro() {
        return lado1 + lado2 + lado3;
    }
};

int main() {
    Triangulo miTriangulo(5, 5, 5);

    cout << "Tipo de triángulo: " << miTriangulo.tipoTriangulo() << endl;
    cout << "Área del triángulo: " << miTriangulo.calcularArea() << endl;
    cout << "Perímetro del triángulo: " << miTriangulo.calcularPerimetro() << endl;

    return 0;
}