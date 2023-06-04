//ENCONTRAR RANGO ENTRE CONJUNTOS

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> conjunto = {1, 2, 3, 4, 5};

    auto inicio = conjunto.lower_bound(2);
    auto fin = conjunto.upper_bound(4);

    cout << "Rango de elementos: ";
    for (auto it = inicio; it != fin; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}