#include <iostream>
#include <string>

using namespace std;

int main() {
    int preguntasCorrectas = 0;
    int preguntasIncorrectas = 0;

    // Pregunta 1
    cout << "�Cu�l es la capital de Francia? ";
    string respuesta1;
    getline(cin, respuesta1);

    if (respuesta1 == "Par�s") {
        cout << "�Correcto!" << endl;
        preguntasCorrectas++;
    } else {
        cout << "Respuesta incorrecta. La respuesta correcta es Par�s." << endl;
        preguntasIncorrectas++;
    }

    // Pregunta 2
    cout << "�Cu�ntos lados tiene un tri�ngulo? ";
    int respuesta2;
    cin >> respuesta2;

    if (respuesta2 == 3) {
        cout << "�Correcto!" << endl;
        preguntasCorrectas++;
    } else {
        cout << "Respuesta incorrecta. Un tri�ngulo tiene 3 lados." << endl;
        preguntasIncorrectas++;
    }

    // Muestra el resultado final
    cout << "\nResultados finales:" << endl;
    cout << "Respuestas correctas: " << preguntasCorrectas << endl;
    cout << "Respuestas incorrectas: " << preguntasIncorrectas << endl;

����return�0;
}
