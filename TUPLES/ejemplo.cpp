#include <iostream>
#include <tuple>

using namespace std;

int main() {

    // Crear un objeto tuple con tres valores
    tuple<string, int, double> mi_tupla("Juan", 25, 3.5);

    // Acceder y mostrar los valores de la tupla
    cout << "El primer valor de la tupla es: " << get<0>(mi_tupla) << endl;
    cout << "El segundo valor de la tupla es: " << get<1>(mi_tupla) << endl;
    cout << "El tercer valor de la tupla es: " << get<2>(mi_tupla) << endl;

    // Crear una tupla utilizando la función make_tuple
    auto persona = make_tuple("Pedro", "García", 30, "México");

    // Acceder y mostrar los valores de la tupla
    cout << "El nombre completo es: " << get<0>(persona) << " " << get<1>(persona) << endl;
    cout << "La edad es: " << get<2>(persona) << endl;
    cout << "El país de origen es: " << get<3>(persona) << endl;

    // Comparar dos tuplas utilizando el operador ==
    tuple<int, string, double> tupla1(2, "Hola", 3.5);
    tuple<int, string, double> tupla2(2, "Mundo", 3.5);

    if (tupla1 == tupla2) {
        cout << "Las tuplas son iguales." << endl;
    } else {
        cout << "Las tuplas son diferentes." << endl;
    }

    // Intercambiar los valores de dos tuplas
    tuple<double, double, double> coordenadas1(2.5, 3.5, 1.0);
    tuple<double, double, double> coordenadas2(4.0, 1.5, 2.0);

    cout << "Las coordenadas antes del intercambio son: (" << get<0>(coordenadas1) << ", " << get<1>(coordenadas1) << ", " << get<2>(coordenadas1) << ") y (" << get<0>(coordenadas2) << ", " << get<1>(coordenadas2) << ", " << get<2>(coordenadas2) << ")" << endl;

    swap(coordenadas1, coordenadas2);

    cout << "Las coordenadas después del intercambio son: (" << get<0>(coordenadas1) << ", " << get<1>(coordenadas1) << ", " << get<2>(coordenadas1) << ") y (" << get<0>(coordenadas2) << ", " << get<1>(coordenadas2) << ", " << get<2>(coordenadas2) << ")" << endl;


     // Crear un objeto tuple con tres valores
    tuple<int, string, double> mi_tupla(10, "Hola", 3.14);

    // Recorrer los elementos de la tupla utilizando índices y la función get
    for (int i = 0; i < 3; i++) {
        cout << "El valor del elemento " << i << " es: " << get<i>(mi_tupla) << endl;
    }


    return 0;
}