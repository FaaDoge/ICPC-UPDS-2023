#include <iostream>
using namespace std;

int main() {
   int num, i;
   bool es_primo = true;
   cout << "Ingrese un número entero positivo: ";
   cin >> num;

   for (i = 2; i <= num / 2; i++) {
      if (num % i == 0) {
         es_primo = false;
         break;
      }
   }

   if (es_primo) {
      cout << num << " es primo.";
   } else {
      cout << num << " no es primo.";
   }

   return 0;
}
