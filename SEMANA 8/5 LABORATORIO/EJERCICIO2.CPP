#include <iostream>
using namespace std;

// Definir una estructura para representar a un cliente
struct Cliente {
    int tipoTarjeta;
    bool tieneDeuda;
    float limiteCredito;
};

class Banco {
public:
    // Función para calcular el nuevo límite de crédito
    void calcularAumento(Cliente &cliente) {
        float incremento = 0.0;
        switch (cliente.tipoTarjeta) {
            case 1:
                incremento = cliente.tieneDeuda ? 0.125 : 0.25;
                break;
            case 2:
                incremento = cliente.tieneDeuda ? 0.175 : 0.35;
                break;
            case 3:
                incremento = 0.4;  // No hay reducción para deudas en tipo 3
                break;
            default:
                incremento = 0.5;  // No hay reducción para deudas en otros tipos
        }

        // Calcular y actualizar el límite de crédito
        cliente.limiteCredito += cliente.limiteCredito * incremento;
    }
};

int main() {
    Banco tingoBank;
    Cliente cliente;

    // Pedir al usuario los detalles del cliente
    cout << "Ingrese el tipo de tarjeta (1, 2, 3, otro): ";
    cin >> cliente.tipoTarjeta;
    cout << "¿El cliente tiene deuda? (1 para sí, 0 para no): ";
    cin >> cliente.tieneDeuda;
    cout << "Ingrese el límite actual de crédito: ";
    cin >> cliente.limiteCredito;

    // Calcular el nuevo límite de crédito
    tingoBank.calcularAumento(cliente);

    // Mostrar el nuevo límite de crédito
    cout << "El nuevo límite de crédito es: $" << cliente.limiteCredito << endl;

    return 0;
}