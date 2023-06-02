#include <iostream>
using namespace std;

int countBinaryStrings(int length, int maxZeros, int maxOnes) {
    // Caso base: cuando la longitud es 0, hay una sola cadena válida (cadena vacía)
    if (length == 0) {
        return 1;
    }

    // Si se excede el límite de ceros o unos, no hay cadenas válidas
    if (maxZeros < 0 || maxOnes < 0) {
        return 0;
    }

    // Caso recursivo: contar las cadenas con un dígito 0 y las cadenas con un dígito 1
    int count = 0;
    if (maxZeros > 0) {
        count += countBinaryStrings(length - 1, maxZeros - 1, maxOnes);
    }
    if (maxOnes > 0) {
        count += countBinaryStrings(length - 1, maxZeros, maxOnes - 1);
    }

    return count;
}

int main() {
    int length, maxZeros, maxOnes;
    cin >> length >> maxZeros >> maxOnes;

    int result = countBinaryStrings(length, maxZeros, maxOnes);
    cout << result << endl;

    return 0;
}