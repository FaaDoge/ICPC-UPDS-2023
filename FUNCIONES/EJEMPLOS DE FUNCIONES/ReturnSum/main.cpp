#include <iostream>

using namespace std;

int sumar(int a, int b){
    return a + b;
}

int main(){
    int num1 = 5;
    int num2 = 7;
    int resultado = sumar(num1, num2);
    cout << "El resultado es: " << resultado << endl;
    return 0;
}

