#include <iostream>
using namespace std;

int main() {
   int num, i, n1 = 0, n2 = 1, n3;
   cout << "Ingrese un número entero positivo: ";
   cin >> num;

   cout << "Los primeros " << num << " números de la serie de Fibonacci son: ";
   cout << n1 << " " << n2 << " ";

   for (i = 2; i < num; i++) {
      n3 = n1 + n2;
      cout << n3 << " ";
      n1 = n2;
      n2 = n3;
   }

   return 0;
}
