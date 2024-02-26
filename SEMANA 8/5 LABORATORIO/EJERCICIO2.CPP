//2. El banco “TingoBank” ha decidido aumentar el límite de crédito de las tarjetas de sus clientes,
// esto considera que si su cliente tiene tarjeta tipo 1, el aumento será de 25 %;
//si tiene tipo 2, será de 35 %;
//si tiene tipo 3, de 40 %, y para cualquier otro tipo, de 50 %.
//Si la persona tiene deuda con el banco solo se le dará la mitad de incremento de los clientes que no tienen deuda para clientes 1 y 2,
//el resto no tiene incremento. se debe realizar un sistema para que calcule el tipo e indique cual sera el aumento del cliente. usar arreglos
//y struct
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