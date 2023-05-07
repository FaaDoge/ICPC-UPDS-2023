#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> nombres;
    for (int i = 0; i < n; i++) {
        string nombre;
        cin >> nombre;
        nombres.insert(nombre);
    }
    cout << nombres.size() << endl;
    for (string nombre : nombres) {
        cout << nombre << endl;
    }
    return 0;
}
