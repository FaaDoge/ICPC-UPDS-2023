#include <iostream>
using namespace std;

int main() {
   int dia;
   cout << "Ingrese un n�mero del 1 al 7: ";
   cin >> dia;

   switch (dia) {
      case 1:
         cout << "Lunes";
         break;
      case 2:
         cout << "Martes";
         break;
      case 3:
         cout << "Mi�rcoles";
         break;
      case 4:
         cout << "Jueves";
         break;
      case 5:
         cout << "Viernes";
         break;
      case 6:
         cout << "S�bado";
         break;
      case 7:
         cout << "Domingo";
         break;
      default:
         cout << "N�mero no v�lido.";
   }

   return 0;
}
