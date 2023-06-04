// VERIFICAR UNA SUMA EN UN VECTOR

#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool tieneSuma(const vector<int>& lista, int suma) {
    set<int> complementos;

    for (const auto& elemento : lista) {
        if (complementos.count(elemento) > 0) {
            return true;
        }
        complementos.insert(suma - elemento);
    }

    return false;
}

int main() {
    vector<int> lista = {1, 2, 3, 4, 5};
    int suma = 9;

    if (tieneSuma(lista, suma)) {
        cout << "Se encontró una suma de " << suma << " en la lista." << endl;
    } else {
        cout << "No se encontró ninguna suma de " << suma << " en la lista." << endl;
    }

    return 0;
}
