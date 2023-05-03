#include <iostream>
using namespace std;

int main() {
   int dia_actual, mes_actual, anio_actual, dia_nac, mes_nac, anio_nac, edad;
   cout << "Ingrese la fecha actual (día, mes y año separados por espacios): ";
   cin >> dia_actual >> mes_actual >> anio_actual;
   cout << "Ingrese su fecha de nacimiento (día, mes y año separados por espacios): ";
   cin >> dia_nac >> mes_nac >> anio_nac;

   edad = anio_actual - anio_nac;

   if (mes_actual < mes_nac || (mes_actual == mes_nac && dia_actual < dia_nac)) {
      edad--;
   }

   cout << "Usted tiene " << edad << " años.";

   return 0;
}
