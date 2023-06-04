//ELIMINAR ELEMENTO

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> conjunto = {1, 2, 3, 4, 5};

    int elementoEliminar = 3;
    conjunto.erase(elementoEliminar);

    cout << "Conjunto después de eliminar " << elementoEliminar << ": ";
    for (const auto& elemento : conjunto) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}
