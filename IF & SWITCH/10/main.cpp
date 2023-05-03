#include <iostream>
using namespace std;

int main() {
   char letra;
   cout << "Ingrese una letra: ";
   cin >> letra;

   switch (letra) {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
         cout << letra << " es una vocal.";
         break;
      default:
         cout << letra << " es una consonante.";
   }
   return 0;
}
