#include <iostream>
using namespace std;

void sumar(int num1, int num2) {
    int resultado = num1 + num2;
    cout << "La suma es: " << resultado << endl;
}

int main() {
    int a = 5, b = 7;
    sumar(a, b); // Llamada a la función
    return 0;
}
