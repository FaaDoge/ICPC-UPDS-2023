#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Lista de frutas
    std::vector<std::string> frutas = { "manzana", "naranja", "manzana", "manzana", "naranja" };

    // Particionar la lista en dos subsecuencias: manzanas y naranjas
    auto it = std::partition(frutas.begin(), frutas.end(), [](const std::string& fruta) {
        return fruta == "manzana";
    });

    // Ordenar las sublistas de manzanas y naranjas
    std::sort(frutas.begin(), it); // manzanas
    std::sort(it, frutas.end());   // naranjas

    // Mostrar las sublistas ordenadas
    std::cout << "Manzanas:";
    for (auto it = frutas.begin(); it != std::partition_point(frutas.begin(), frutas.end(),
        [](const std::string& fruta) { return fruta == "manzana"; }); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;

    std::cout << "Naranjas:";
    for (auto it = std::partition_point(frutas.begin(), frutas.end(),
        [](const std::string& fruta) { return fruta == "manzana"; }); it != frutas.end(); ++it) {
        std::cout << " " << *it;
    }
    std::cout << std::endl;

    return 0;
}
