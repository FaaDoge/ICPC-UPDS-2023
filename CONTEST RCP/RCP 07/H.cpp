#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> emparejamientosFilas;

int problemaDeMRD(vector<vector<int>>& a) {
    int filas = a.size();
    int columnas = a[0].size();

    vector<int> u(filas);
    vector<int> v(columnas + 1);
    vector<int> p(columnas + 1, -1);
    p[columnas] = 0;

    for (int i = 0; i < filas; i++) {
        vector<int> dist(columnas + 1, numeric_limits<int>::max());
        vector<int> from(columnas + 1, -1);
        vector<bool> visto(columnas + 1, false);

        int j0 = columnas;
        p[j0] = i;

        while (p[j0] != -1) {
            visto[j0] = true;
            int i0 = p[j0];
            int delta = numeric_limits<int>::max();
            int j1 = -1;

            for (int j = 0; j < columnas; j++) {
                if (visto[j])
                    continue;

                int distCandidata = a[i0][j] - u[i0] - v[j];
                if (distCandidata < dist[j]) {
                    dist[j] = distCandidata;
                    from[j] = j0;
                }

                if (dist[j] < delta) {
                    delta = dist[j];
                    j1 = j;
                }
            }

            for (int j = 0; j <= columnas; j++) {
                if (visto[j]) {
                    u[p[j]] += delta;
                    v[j] -= delta;
                }
                else {
                    dist[j] -= delta;
                }
            }

            j0 = j1;
        }

        while (j0 != columnas) {
            int j1 = from[j0];
            p[j0] = p[j1];
            j0 = j1;
        }
    }

    int respuesta = -v[columnas];
    emparejamientosFilas = vector<int>(filas);
    for (int j = 0; j < columnas; j++) {
        if (p[j] != -1) {
            emparejamientosFilas[p[j]] = j;
        }
    }

    return respuesta;
}

int main() {
    int numFilas, numColumnas, minInscripcion;
    cin >> numFilas >> numColumnas >> minInscripcion;

    vector<vector<int>> ratings(numFilas, vector<int>(numColumnas));
    vector<int> maximo(numFilas);
    int sumaMaximo = 0;

    for (int i = 0; i < numFilas; i++) {
        for (int j = 0; j < numColumnas; j++) {
            cin >> ratings[i][j];
            maximo[i] = std::max(maximo[i], ratings[i][j]);
        }
        sumaMaximo += maximo[i];
    }

    vector<vector<int>> tableau(numFilas, vector<int>(numFilas, 0));

    for (int i = 0; i < numFilas; i++) {
        for (int j = 0; j < numColumnas; j++) {
            for (int k = 0; k < minInscripcion; k++) {
                tableau[i][j * minInscripcion + k] = maximo[i] - ratings[i][j];
            }
        }
    }

    int sub = problemaDeMRD(tableau);
    int resultado = sumaMaximo - sub;

    cout << resultado << endl;

    return 0;
}