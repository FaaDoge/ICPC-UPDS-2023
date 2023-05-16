#include <iostream>
#include <vector>

using namespace std;

int findIndexEqualToValue(vector<int>& arr, int low, int high) {
    // Si la sub está vacía, no hay valor que sea igual a su índice
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    // Si el valor en el medio es igual a su índice, devolverlo
    if (arr[mid] == mid) {
        return mid;
    }
    // Si el valor en el medio es mayor que su índice, buscar en la mitad izquierda
    else if (arr[mid] > mid) {
        return findIndexEqualToValue(arr, low, mid - 1);
    }
    // Si el valor en el medio es menor que su índice, buscar en la mitad derecha
    else {
        return findIndexEqualToValue(arr, mid + 1, high);
    }
}

int main() {
    vector<int> arr = { -3, -1, 0, 3, 5, 7, 8, 9 };

    int index = findIndexEqualToValue(arr, 0, arr.size() - 1);

    if (index != -1) {
        cout << "El número que es igual a su índice es: " << arr[index] << " en la posición " << index << endl;
    }
    else {
        cout << "No se encontró ningún número que sea igual a su índice" << endl;
    }

    return 0;
}