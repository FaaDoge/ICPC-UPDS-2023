/*
En C++, un mapa (map) es una estructura de datos que permite almacenar elementos
asociados a una clave única. Es decir, se puede acceder a los elementos mediante
una clave en lugar de un índice numérico. Es una implementación de la estructura
de datos conocida como tabla hash.
Complejidad (O(Log n))
Los mapas tienen una serie de ventajas y desventajas:

Ventajas:

Permite una búsqueda eficiente de elementos por clave.
Mantiene las claves ordenadas automáticamente.
Fácil de usar y de implementar.
Desventajas:

Los mapas consumen más memoria que otros contenedores, como los vectores.
Su acceso y búsqueda en ocaciones es más lento que el de los vectores.

Ejemplo:


El ejercicio recorre la lista de números y por cada número verifica
si es primo o no. Si es primo, lo agregamos a un mapa donde
la clave es el número primo y el valor es su frecuencia en la lista

Luego, sumamos todos los números primos encontrados y buscamos el siguiente
número primo al total de la suma.

*/
#include <bits/stdc++.h>
using namespace std;

// Función para determinar si un número es primo o no
bool is_prime(int n) {
    if (n <= 1) return false; // los números menores o iguales a 1 no son primos
    int limit = sqrt(n); // calculamos la raíz cuadrada del número para optimizar el algoritmo
    for (int i = 2; i <= limit; i++) {
        if (n % i == 0) {
            return false; // si encontramos un divisor, el número no es primo
        }
    }
    return true; // si no encontramos divisores, el número es primo
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n; // leemos la cantidad de números en la lista
    map<int, int> primes_freq; // usamos un map para contar cuántas veces aparece cada número primo en la lista
    int sum_primes = 0; // llevamos la suma de los números primos encontrados
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num; // leemos un número de la lista
        if (is_prime(num)) { // si el número es primo
            primes_freq[num]++; // lo agregamos al map y aumentamos su frecuencia
            sum_primes += num; // sumamos el número a la suma total de números primos
        }
    }
    if (sum_primes == 0) { // si no encontramos números primos en la lista
        cout << -1 << endl; // imprimimos -1
    } else { // si encontramos números primos
        int next_prime = sum_primes + 1; // calculamos el siguiente número primo a partir de la suma de los números primos encontrados
        while (!is_prime(next_prime)) { // buscamos el siguiente número primo
            next_prime++;
        }
        cout << next_prime << endl; // imprimimos el siguiente número primo
    }
    return 0;
}
