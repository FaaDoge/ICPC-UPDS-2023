#include <iostream>
using namespace std;

int obtenerNumero() {
    int num;
    cout << "Ingrese un número: ";
    cin >> num;
    return num;
}

int main() {
    int numero = obtenerNumero(); // Llamada a la función y asignación del resultado
    cout << "El número ingresado es: " << numero << endl;
    return 0;
}
