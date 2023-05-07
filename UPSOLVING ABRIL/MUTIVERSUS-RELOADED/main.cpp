#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Mapa para almacenar la cantidad de votos por creador de contenido
    map<string, int> votos;

    // Actualizar el mapa con los votos de los usuarios
    for (int i = 0; i < N; i++) {
        string nombre;
        cin >> nombre;
        votos[nombre]++;
    }

    // Buscar el creador de contenido más votado y el menos votado
    auto it_max = votos.begin();
    auto it_min = votos.begin();
    for (auto it = votos.begin(); it != votos.end(); it++) {
        if (it->second > it_max->second) {
            it_max = it;
        }
        if (it->second < it_min->second) {
            it_min = it;
        }
    }

    // Imprimir los resultados
    cout << it_max->first << " " << it_max->second << endl;
    cout << it_min->first << " " << it_min->second << endl;

    return 0;
}
