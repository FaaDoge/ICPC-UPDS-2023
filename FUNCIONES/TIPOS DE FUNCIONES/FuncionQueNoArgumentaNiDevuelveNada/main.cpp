/*
FUNCIONES

Una función en programación es un bloque de código que
realiza una tarea específica y devuelve un resultado. Se
utiliza para agrupar y reutilizar código, lo que mejora la
legibilidad, el mantenimiento y la eficiencia del programa.

Las funciones pueden ser definidas por el usuario o pueden
ser parte de una biblioteca de funciones predeterminadas.
Además, las funciones pueden ser llamadas o invocadas desde
cualquier parte del programa, y pueden tomar argumentos o
parámetros para su ejecución.

*/

#include <iostream>
using namespace std;

void saludar() {
    cout << "Hola, ¿cómo estás?" << endl;
}

int main() {
    saludar(); // Llamada a la función
    return 0;
}
