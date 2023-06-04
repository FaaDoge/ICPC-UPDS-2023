//VERIFICAR IGUALDAD

#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> conjunto1 = {1, 2, 3};
    set<int> conjunto2 = {3, 2, 1};

    if (conjunto1 == conjunto2) {
        cout << "Los conjuntos son iguales." << endl;
    } else {
        cout << "Los conjuntos son diferentes." << endl;
    }

    return 0;
}
