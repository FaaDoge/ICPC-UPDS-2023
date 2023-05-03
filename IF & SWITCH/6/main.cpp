#include <iostream>
using namespace std;

int main() {
   float altura, peso, imc;
   cout << "Ingrese su altura en metros: ";
   cin >> altura;
   cout << "Ingrese su peso en kilogramos: ";
   cin >> peso;

   imc = peso / (altura * altura);

   cout << "Su índice de masa corporal (IMC) es " << imc << ".";

   return 0;
}
