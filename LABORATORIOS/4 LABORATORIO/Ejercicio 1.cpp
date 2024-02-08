#include <iostream>
using namespace std;

int main() {
    int num_respuestas;
    int puntaje_total = 0;

    // Pedir al usuario el número de respuestas
    cout << "Ingrese el número de respuestas del postulante: ";
    cin >> num_respuestas;

    // Validar que el número de respuestas no sea mayor a 20
    if (num_respuestas > 20) {
        cout << "El número de respuestas no puede ser mayor a 20.\n";
        return 1; // Salir del programa con un error
    }

    // Procesar cada respuesta
    for (int i = 0; i < num_respuestas; ++i) {
        char respuesta;
        cout << "Ingrese la respuesta " << i + 1 << " (c/correcta, i/incorrecta, b/blanco): ";
        cin >> respuesta;

        // Actualizar el puntaje según la respuesta
        switch (respuesta) {
            case 'c':
                puntaje_total += 4;
                break;
            case 'i':
                puntaje_total -= 2;
                break;
            case 'b':
                puntaje_total += 0;
                break;
            default:
                cout << "Respuesta inválida.\n";
                return 1; // Salir del programa con un error
        }
    }

    // Mostrar el puntaje total
    cout << "El puntaje total del postulante es: " << puntaje_total << endl;

    return 0;
}