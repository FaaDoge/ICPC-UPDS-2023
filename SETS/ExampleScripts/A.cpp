// ELIMINAR DUPLICADOS

#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> lista = {1, 2, 3, 2, 4, 3, 5};

    set<int> conjunto(lista.begin(), lista.end());

    for (const auto& elemento : conjunto) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}
