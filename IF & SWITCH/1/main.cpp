#include <iostream>
using namespace std;

int main() {
   int num;
   cout << "Ingrese un numero entero: ";
   cin >> num;

   if (num % 2 == 0) {
      cout << num << " es par.";
   } else {
      cout << num << " es impar.";
   }

   return 0;
}
