#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, pair<int, int>> mapa;

    for (int i = 0; i < n; i++) {
        string nombre;
        int edad, nivel;
        cin >> nombre >> edad >> nivel;

        mapa[nombre] = {edad, nivel};
    }

    string nombre_perdido;
    cin >> nombre_perdido;

    if (mapa.find(nombre_perdido) != mapa.end()) {
        int edad, nivel;
        cin >> edad >> nivel;

        mapa[nombre_perdido] = {edad, nivel};

        cout << "Ayuda en camino" << endl;
    } else {
        cout << "Informacion Falsa" << endl;
    }

    return 0;
}
