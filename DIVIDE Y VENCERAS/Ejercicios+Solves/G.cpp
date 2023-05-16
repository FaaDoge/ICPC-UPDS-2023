#include <iostream>
#include <vector>
#include <utility> // Incluimos la librería para poder usar std::pair

using namespace std;

double encontrarPico(vector<pair<double, double>>& puntos, int inicio, int fin) {
    int tam = fin - inicio + 1;
    if (tam == 1) {
        return puntos[inicio].second; // Si solo hay un punto, devolvemos su altura
    }
    if (tam == 2) {
        return max(puntos[inicio].second, puntos[fin].second); // Si hay dos puntos, devolvemos la altura del punto más alto
    }
    int medio = inicio + (fin - inicio) / 2; // Dividimos el arreglo en dos partes iguales
    double izquierda = encontrarPico(puntos, inicio, medio); // Encontramos el pico en la parte izquierda
    double derecha = encontrarPico(puntos, medio + 1, fin); // Encontramos el pico en la parte derecha
    return max(izquierda, derecha); // Devolvemos la altura del pico más alto de las dos partes
}

int main() {
    vector<pair<double, double>> puntos = {{0, 1}, {1, 2}, {2, 3}, {3, 2}, {4, 1}}; // Creamos un vector con los puntos
    double pico = encontrarPico(puntos, 0, puntos.size() - 1); // Encontramos la altura del pico más alto
    cout << "La altura del pico más alto es: " << pico << endl; // Imprimimos la altura del pico más alto
    return 0;
}