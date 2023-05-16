#include <iostream>
#include <vector>

using namespace std;

// Función para particionar el arreglo en base al pivote y devolver la posición del pivote
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Tomamos el último elemento como pivote
    int i = low - 1; // Inicializamos el índice del elemento más pequeño
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] >= pivot) { // Si el elemento actual es mayor o igual al pivote
            i++; // Incrementamos el índice del elemento más pequeño
            swap(arr[i], arr[j]); // Intercambiamos los elementos i y j en el arreglo
        }
    }
    swap(arr[i + 1], arr[high]); // Intercambiamos el pivote con el elemento en la posición i+1
    return i + 1; // Devolvemos la posición del pivote
}

// Función para encontrar el k-ésimo elemento más grande del arreglo
int kthLargest(vector<int>& arr, int low, int high, int k) {
    int pos = partition(arr, low, high); // Obtenemos la posición del pivote
    if (pos == k - 1) { // Si la posición del pivote es igual a k-1 (es decir, el pivote es el k-ésimo elemento más grande)
        return arr[pos]; // Devolvemos el valor del pivote
    } else if (pos > k - 1) { // Si la posición del pivote es mayor a k-1
        return kthLargest(arr, low, pos - 1, k); // Buscamos en la sublista izquierda del pivote
    } else { // Si la posición del pivote es menor a k-1
        return kthLargest(arr, pos + 1, high, k); // Buscamos en la sublista derecha del pivote
    }
}

int main() {
    int n, k;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    vector<int> arr(n); // Creamos un vector para almacenar los elementos
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Pedimos al usuario que ingrese los elementos del vector
    }
    cout << "Ingrese el valor de k: ";
    cin >> k; // Pedimos al usuario que ingrese el valor de k
    int kth = kthLargest(arr, 0, n - 1, k); // Encontramos el k-ésimo elemento más grande del arreglo
    cout << "El k-esimo elemento mas grande es: " << kth << endl; // Mostramos el resultado al usuario
    return 0;
}