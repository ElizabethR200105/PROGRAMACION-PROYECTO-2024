#include <iostream>
#include <string>

using namespace std;

int main() {
    int preguntasCorrectas = 0;
    int preguntasIncorrectas = 0;

    // Pregunta 1
    cout << "¿Cuál es la capital de Francia? ";
    string respuesta1;
    getline(cin, respuesta1);

    if (respuesta1 == "París") {
        cout << "¡Correcto!" << endl;
        preguntasCorrectas++;
    } else {
        cout << "Respuesta incorrecta. La respuesta correcta es París." << endl;
        preguntasIncorrectas++;
    }

    // Pregunta 2
    cout << "¿Cuántos lados tiene un triángulo? ";
    int respuesta2;
    cin >> respuesta2;

    if (respuesta2 == 3) {
        cout << "¡Correcto!" << endl;
        preguntasCorrectas++;
    } else {
        cout << "Respuesta incorrecta. Un triángulo tiene 3 lados." << endl;
        preguntasIncorrectas++;
    }

    // Muestra el resultado final
    cout << "\nResultados finales:" << endl;
    cout << "Respuestas correctas: " << preguntasCorrectas << endl;
    cout << "Respuestas incorrectas: " << preguntasIncorrectas << endl;

    return 0;
}
