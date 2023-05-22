#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Lista de números
    std::vector<int> numeros = { 10, 25, 8, 13, 42, 17, 56, 32 };

    // Obtener el valor del elemento en la posición 7 (índice 6) de la lista
    int posicion = 6;
    int valor = numeros[posicion];

    // Mostrar el valor del elemento en la posición 7
    std::cout << "Valor en la posición " << posicion + 1 << ": " << valor << std::endl;

    return 0;
}
