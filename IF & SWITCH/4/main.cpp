#include <iostream>
using namespace std;

int main() {
   int dia;
   cout << "Ingrese un número del 1 al 7: ";
   cin >> dia;

   switch (dia) {
      case 1:
         cout << "Lunes";
         break;
      case 2:
         cout << "Martes";
         break;
      case 3:
         cout << "Miércoles";
         break;
      case 4:
         cout << "Jueves";
         break;
      case 5:
         cout << "Viernes";
         break;
      case 6:
         cout << "Sábado";
         break;
      case 7:
         cout << "Domingo";
         break;
      default:
         cout << "Número no válido.";
   }

   return 0;
}
