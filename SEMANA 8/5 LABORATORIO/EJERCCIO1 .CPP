//1. Escriba un programa que simule el juego de adivinar un número.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Generar un número aleatorio entre 1 y 100
    int numeroSecreto = rand() % 100 + 1;

    int numero, intentosRealizados = 0;
    const int maxIntentos = 5;

    cout << "Bienvenido al juego de adivinar el número entre 1 y 100. Tienes 5 intentos\n";

    while (intentosRealizados < maxIntentos) {
        cout << "Intento #" << intentosRealizados + 1 << ": ";
        cin >> numero;

        // Incrementar el contador de intentos
        intentosRealizados++;

        if (numero == numeroSecreto) {
        cout << "¡Felicidades! Adivinaste el número en " << intentosRealizados << " intentos.\n";
            break;
        } else if (numero < numeroSecreto) {
            cout << "El número es mayor. ";
        } else {
            cout << "El número es menor. ";
        }

        cout << "Te quedan " << maxIntentos - intentosRealizados << " intentos.\n";
    }

    if (intentosRealizados == maxIntentos) {
        cout << "Lo siento, has agotado tus intentos. El número correcto era: " << numeroSecreto << "\n";
    }

    return 0;
}