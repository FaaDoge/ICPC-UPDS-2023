#include <iostream>
#include <string>

using namespace std;

bool palindromo(string palabra, int inicio, int fin) {
    if (inicio >= fin) {
        return true;
    }
    else if (palabra[inicio] != palabra[fin]) {
        return false;
    }
    else {
        return palindromo(palabra, inicio + 1, fin - 1);
    }
}

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    if (palindromo(palabra, 0, palabra.length() - 1)) {
        cout << "La palabra es un palindromo" << endl;
    }
    else {
        cout << "La palabra no es un palindromo" << endl;
    }
    return 0;
}