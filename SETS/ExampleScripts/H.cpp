//ENCONTRAR SIGUIENTE NUMERO 

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> conjunto = {1, 2, 3, 4, 5};

    int elemento = 3;

    auto it = conjunto.find(elemento);
    if (it != conjunto.end()) {
        ++it;
        if (it != conjunto.end()) {
            cout << "Elemento siguiente a " << elemento << ": " << *it << endl;
        } else {
            cout << "No hay elemento siguiente a " << elemento << "." << endl;
        }
    } else {
        cout << "El elemento " << elemento << " no está en el conjunto." << endl;
    }

    return 0;
}
