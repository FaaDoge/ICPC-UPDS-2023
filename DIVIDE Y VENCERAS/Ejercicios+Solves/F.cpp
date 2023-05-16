#include <iostream>
#include <vector>

using namespace std;

// Función que busca los números que son iguales a su índice en el arreglo
void buscarIndices(vector<int>& arr, int ini, int fin) {
    // Caso base: si el tamaño del subarreglo es 1 y su valor es igual a su índice, lo mostramos
    if (ini == fin) {
        if (arr[ini] == ini) {
            cout << "El número " << arr[ini] << " es igual a su índice " << ini << endl;
        }
        return;
    }
    // Calculamos el índice del medio del subarreglo
    int medio = (ini + fin) / 2;
    
    // Si el valor del medio es mayor que su índice, buscamos en la mitad izquierda del subarreglo
    if (arr[medio] > medio) {
        buscarIndices(arr, ini, medio - 1);
    }
    // Si el valor del medio es menor que su índice, buscamos en la mitad derecha del subarreglo
    else if (arr[medio] < medio) {
        buscarIndices(arr, medio + 1, fin);
    }
    // Si el valor del medio es igual a su índice, lo mostramos y buscamos en ambas mitades del subarreglo
    else {
        cout << "El número " << arr[medio] << " es igual a su índice " << medio << endl;
        buscarIndices(arr, ini, medio - 1);
        buscarIndices(arr, medio + 1, fin);
    }
}

// Función principal
int main() {
    vector<int> arr = {0, 2, 3, 4, 6, 7, 9, 10};
    
    buscarIndices(arr, 0, arr.size() - 1);
    
    return 0;
}