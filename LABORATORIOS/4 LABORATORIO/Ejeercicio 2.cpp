#include <iostream>
using namespace std;

int main() {
    int partidos_ganados = 0;
    int partidos_empatados = 0;
    int puntaje_total;

    // Pedir al usuario el número de partidos ganados y empatados
    cout << "Ingrese el número de partidos ganados: ";
    cin >> partidos_ganados;

    cout << "Ingrese el número de partidos empatados: ";
    cin >> partidos_empatados;

    // Calcular el puntaje total
    puntaje_total = (partidos_ganados * 3) + partidos_empatados;

    // Mostrar el puntaje total
    cout << "El puntaje total del equipo de fútbol es: " << puntaje_total << endl;

    return 0;
}