#include <iostream>
using namespace std;

int main() {
   int num, suma = 0;
   cout << "Ingrese un n�mero entero positivo: ";
   cin >> num;

   for (int i = 1; i <= num; i += 2) {
      suma += i;
   }

   cout << "La suma de los n�meros impares hasta " << num << " es " << suma << ".";

   return 0;
}
