/*
En C++, un mapa (map) es una estructura de datos que permite almacenar elementos
asociados a una clave �nica. Es decir, se puede acceder a los elementos mediante
una clave en lugar de un �ndice num�rico. Es una implementaci�n de la estructura
de datos conocida como tabla hash.
Complejidad (O(Log n))
Los mapas tienen una serie de ventajas y desventajas:

Ventajas:

Permite una b�squeda eficiente de elementos por clave.
Mantiene las claves ordenadas autom�ticamente.
F�cil de usar y de implementar.
Desventajas:

Los mapas consumen m�s memoria que otros contenedores, como los vectores.
Su acceso y b�squeda en ocaciones es m�s lento que el de los vectores.

Ejemplo:


El ejercicio recorre la lista de n�meros y por cada n�mero verifica
si es primo o no. Si es primo, lo agregamos a un mapa donde
la clave es el n�mero primo y el valor es su frecuencia en la lista

Luego, sumamos todos los n�meros primos encontrados y buscamos el siguiente
n�mero primo al total de la suma.

*/
#include <bits/stdc++.h>
using namespace std;

// Funci�n para determinar si un n�mero es primo o no
bool is_prime(int n) {
    if (n <= 1) return false; // los n�meros menores o iguales a 1 no son primos
    int limit = sqrt(n); // calculamos la ra�z cuadrada del n�mero para optimizar el algoritmo
    for (int i = 2; i <= limit; i++) {
        if (n % i == 0) {
            return false; // si encontramos un divisor, el n�mero no es primo
        }
    }
    return true; // si no encontramos divisores, el n�mero es primo
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n; // leemos la cantidad de n�meros en la lista
    map<int, int> primes_freq; // usamos un map para contar cu�ntas veces aparece cada n�mero primo en la lista
    int sum_primes = 0; // llevamos la suma de los n�meros primos encontrados
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num; // leemos un n�mero de la lista
        if (is_prime(num)) { // si el n�mero es primo
            primes_freq[num]++; // lo agregamos al map y aumentamos su frecuencia
            sum_primes += num; // sumamos el n�mero a la suma total de n�meros primos
        }
    }
    if (sum_primes == 0) { // si no encontramos n�meros primos en la lista
        cout << -1 << endl; // imprimimos -1
    } else { // si encontramos n�meros primos
        int next_prime = sum_primes + 1; // calculamos el siguiente n�mero primo a partir de la suma de los n�meros primos encontrados
        while (!is_prime(next_prime)) { // buscamos el siguiente n�mero primo
            next_prime++;
        }
        cout << next_prime << endl; // imprimimos el siguiente n�mero primo
    }
    return 0;
}
