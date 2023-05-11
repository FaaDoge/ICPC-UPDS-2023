#include <iostream>
using namespace std;

int findMax(int arr[], int izquierda, int derecha) {
    if (izquierda == derecha) { // caso base
        return arr[izquierda];
    }
    int mid = (izquierda + derecha) / 2; // dividir el arreglo en dos partes iguales
    int maxLeft = findMax(arr, izquierda, mid); // encontrar el máximo valor en la primera mitad del arreglo
    int maxRight = findMax(arr, mid + 1, derecha); // encontrar el máximo valor en la segunda mitad del arreglo
    return max(maxLeft, maxRight); // comparar y devolver el mayor
}

int main() {
    int arr[] = {1, 5, 9, 3, 7, 2, 8, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxVal = findMax(arr, 0, n - 1);
    cout << "El máximo valor del arreglo es: " << maxVal << endl;
    return 0;
}
