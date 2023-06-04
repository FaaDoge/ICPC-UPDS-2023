/*

SETS

�Qu� son los conjuntos (sets)?
Los conjuntos, tambi�n conocidos como sets,
son estructuras de datos que contienen elementos
�nicos. No permiten elementos duplicados
y proporcionan operaciones eficientes para agregar,
eliminar y buscar elementos.

�Para qu� sirven los conjuntos?
Los conjuntos son �tiles en diversas situaciones, como:

Eliminar duplicados: Puedes utilizar un conjunto para
almacenar elementos �nicos de una lista o arreglo.
Comprobaci�n de pertenencia: Puedes verificar r�pidamente
si un elemento est� presente en un conjunto.
Realizar operaciones de conjuntos: Los conjuntos
proporcionan operaciones como la uni�n, intersecci�n y
diferencia entre conjuntos, lo cual es �til en diversas aplicaciones.

*/
#include <iostream>

// 1: INCLUIR LIBRERIA SET O LA LIBRERIA GLOBAL BITS
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main() {
    // Crear un conjunto vac�o
    set<int> conjunto;

    // Agregar elementos al conjunto aqui pueden intercambiar los numeros con variables

    conjunto.insert(5);
    conjunto.insert(2);
    conjunto.insert(8);

    // Eliminar un elemento del conjunto
    conjunto.erase(2);

    // Comprobar si un elemento est� presente en el conjunto
    if (conjunto.count(5) > 0) {
        cout << "El elemento 5 est� en el conjunto" << endl;
    }

    // Recorrer el conjunto
    for (const auto& elemento : conjunto) {
        cout << elemento << " ";
    }
    cout << endl;

    // Uni�n de conjuntos
    set<int> conjunto1 = {1, 2, 3};
    set<int> conjunto2 = {3, 4, 5};
    set<int> unionConjuntos;

    set_union(conjunto1.begin(), conjunto1.end(),
              conjunto2.begin(), conjunto2.end(),
              inserter(unionConjuntos, unionConjuntos.begin()));
    //Mostrando Union
    for (const auto& elemento : unionConjuntos) {
        cout << elemento << " ";
    }
    cout << endl;


    // Intersecci�n de conjuntos
    set<int> interseccionConjuntos;

    set_intersection(conjunto1.begin(), conjunto1.end(),
                     conjunto2.begin(), conjunto2.end(),
                     inserter(interseccionConjuntos, interseccionConjuntos.begin()));

    //Mostrando insercion

    for (const auto& elemento : unionConjuntos) {
        cout << elemento << " ";
    }
    cout << endl;

    // Diferencia de conjuntos
    set<int> diferenciaConjuntos;

    set_difference(conjunto1.begin(), conjunto1.end(),
                   conjunto2.begin(), conjunto2.end(),
                   inserter(diferenciaConjuntos, diferenciaConjuntos.begin()));

     //Mostrando diferencia
    for (const auto& elemento : unionConjuntos) {
        cout << elemento << " ";
    }
    cout << endl;

    return 0;
}
