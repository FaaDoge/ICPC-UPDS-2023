//EXISTENCIA DE UN SUBCONJUNTO

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> conjunto1 = {1, 2, 3, 4, 5};
    set<int> conjunto2 = {2, 4};

    bool esSubconjunto = true;

    for (const auto& elemento : conjunto2) {
        if (conjunto1.count(elemento) == 0) {
            esSubconjunto = false;
            break;
        }
    }

    if (esSubconjunto) {
        cout << "El conjunto 2 es un subconjunto del conjunto 1." << endl;
    } else {
        cout << "El conjunto 2 no es un subconjunto del conjunto 1." << endl;
    }

    return 0;
}
