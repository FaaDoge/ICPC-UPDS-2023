#include <iostream>
#include <vector>

using namespace std;

// Funci�n que utiliza la t�cnica de divide y vencer�s para calcular el m�ximo valor de un arreglo
int maximo_divide_venceras(vector<int>& v, int inicio, int fin) {
    if (inicio == fin) { // Caso base: el arreglo tiene solo un elemento
        return v[inicio];
    } else {
        int medio = (inicio + fin) / 2; // Calculamos el punto medio del arreglo
        int max_izq = maximo_divide_venceras(v, inicio, medio); // Calculamos el m�ximo del lado izquierdo del arreglo
        int max_der = maximo_divide_venceras(v, medio + 1, fin); // Calculamos el m�ximo del lado derecho del arreglo
        return max(max_izq, max_der); // Devolvemos el m�ximo valor entre los dos lados del arreglo
    }
}

int main() {
    vector<int> v = {3, 5, 2, 9, 1}; // Creamos un vector con algunos n�meros
    int maximo = maximo_divide_venceras(v, 0, v.size() - 1); // Llamamos a la funci�n para calcular el m�ximo valor del vector
    cout << "El maximo valor del vector es: " << maximo << endl; // Imprimimos el resultado
    return 0;
}
