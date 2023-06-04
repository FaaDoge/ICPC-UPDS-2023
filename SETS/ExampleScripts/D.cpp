//VERIFICAR EXISTENCIA DE UN NUMERO EN UN VECTOR

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> conjunto = {1, 2, 3, 4, 5};

    int elemento = 3;

    if (conjunto.count(elemento) > 0) {
        cout << "El elemento " << elemento << " está en el conjunto." << endl;
    } else {
        cout << "El elemento " << elemento << " no está en el conjunto." << endl;
    }

    return 0;
}
