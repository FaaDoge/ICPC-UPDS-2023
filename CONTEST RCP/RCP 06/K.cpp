#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    int falls = 0;
    bool switch_side = false;

    // Iterar sobre cada paso en el puente
    for (int i = 0; i < n; i++) {
        // Verificar si el lado elegido es el correcto
        if ((s[i] == 'L' && switch_side) || (s[i] == 'R' && !switch_side)) {
            falls++;  // El niño cae al agua
        } else {
            switch_side = !switch_side;  // Cambiar de lado para el próximo niño
        }
    }

    int kids_made_it = k - falls;
    if (kids_made_it < 0) {
        kids_made_it = 0;  // Si la cantidad es negativa, establecerla en 0
    }

    cout << kids_made_it << endl;

    return 0;
}
