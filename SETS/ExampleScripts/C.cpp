//CONTAR ELEMENTOS UNICOS

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> lista = {1, 2, 3, 2, 4, 3, 5};

    set<int> conjunto(lista.begin(), lista.end());

    int numElementosUnicos = conjunto.size();

    cout << "Número de elementos únicos: " << numElementosUnicos << endl;

    return 0;
}
