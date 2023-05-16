#include <iostream>
using namespace std;
int mcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    }
    else {
        return mcd(num2, num1 % num2);
    }
}
int main() {
    int num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "El maximo comun divisor entre " << num1 << " y " << num2 << " es: " << mcd(num1, num2) << endl;
    return 0;
}