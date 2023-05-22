#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Lista de distancias entre ciudades
    std::vector<int> distancias = { 200, 150, 100, 300, 250 };

    // Capacidad de combustible del automóvil
    int capacidadCombustible = 400;

    // Ordenar la lista de distancias en orden descendente
    std::sort(distancias.rbegin(), distancias.rend());

    // Calcular la distancia máxima recorrible antes de repostar gasolina
    int distanciaMaxima = 0;
    int combustibleActual = capacidadCombustible;
    for (const auto& distancia : distancias) {
        if (combustibleActual >= distancia) {
            distanciaMaxima += distancia;
            combustibleActual -= distancia;
        } else {
            break;
        }
    }

    // Mostrar la distancia máxima recorrible
    std::cout << "Distancia máxima recorrible: " << distanciaMaxima << " km" << std::endl;

    return 0;
}
