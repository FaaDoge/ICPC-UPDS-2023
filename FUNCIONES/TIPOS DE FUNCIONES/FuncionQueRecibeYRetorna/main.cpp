#include <iostream>
using namespace std;

int multiplicar(int num1, int num2) {
    return num1 * num2;
}

int main() {
    int a = 5, b = 7;
    int resultado = multiplicar(a, b); // Llamada a la funci�n y asignaci�n del resultado
    cout << "El resultado de la multiplicaci�n es: " << resultado << endl;
    return 0;
}
