#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int maximizeNumber(int number) {
    // Convertir el número en una cadena de caracteres
    string numberString = to_string(number);

    // Ordenar los dígitos en orden descendente
    sort(numberString.begin(), numberString.end(), greater<char>());

    // Convertir la cadena de caracteres en un entero
    int maximizedNumber = stoi(numberString);

    return maximizedNumber;
}

int main() {
    int inputNumber;
    cin >> inputNumber;

    int maximizedNumber = maximizeNumber(inputNumber);

    cout << maximizedNumber << endl;

    return 0;
}
