#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Imprimir los elementos del vector
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // Modificar el tamaño del vector
    v.resize(8);
    v[6] = 6;
    v[7] = 7;

    // Imprimir los elementos del vector después del resize
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    // Intercambiar dos vectores
    vector<int> v2 = {10, 20, 30};
    v.swap(v2);

    // Imprimir los elementos de los vectores después del swap
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    for (int x : v2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}