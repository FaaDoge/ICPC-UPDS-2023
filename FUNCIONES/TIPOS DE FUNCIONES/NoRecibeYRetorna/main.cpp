#include <iostream>
using namespace std;

int obtenerNumero() {
    int num;
    cout << "Ingrese un n�mero: ";
    cin >> num;
    return num;
}

int main() {
    int numero = obtenerNumero(); // Llamada a la funci�n y asignaci�n del resultado
    cout << "El n�mero ingresado es: " << numero << endl;
    return 0;
}
