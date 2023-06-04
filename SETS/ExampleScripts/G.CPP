//ENCONTRAR ELEMENTO MIN Y MAX

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> conjunto = {3, 1, 4, 2, 5};

    int minimo = *conjunto.begin();
    int maximo = *conjunto.rbegin();

    cout << "Elemento mínimo: " << minimo << endl;
    cout << "Elemento máximo: " << maximo << endl;

    return 0;
}
