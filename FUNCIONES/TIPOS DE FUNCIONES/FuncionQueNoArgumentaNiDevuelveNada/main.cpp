/*
FUNCIONES

Una funci�n en programaci�n es un bloque de c�digo que
realiza una tarea espec�fica y devuelve un resultado. Se
utiliza para agrupar y reutilizar c�digo, lo que mejora la
legibilidad, el mantenimiento y la eficiencia del programa.

Las funciones pueden ser definidas por el usuario o pueden
ser parte de una biblioteca de funciones predeterminadas.
Adem�s, las funciones pueden ser llamadas o invocadas desde
cualquier parte del programa, y pueden tomar argumentos o
par�metros para su ejecuci�n.

*/

#include <iostream>
using namespace std;

void saludar() {
    cout << "Hola, �c�mo est�s?" << endl;
}

int main() {
    saludar(); // Llamada a la funci�n
    return 0;
}
