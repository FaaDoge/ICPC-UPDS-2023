#include <iostream>
using namespace std;

int main() {
   int edad;
   cout << "Ingrese su edad: ";
   cin >> edad;

   if (edad >= 18) {
      cout << "Usted puede votar en las pr�ximas elecciones.";
   } else {
      cout << "Usted no puede votar en las pr�ximas elecciones.";
   }

   return 0;
}
