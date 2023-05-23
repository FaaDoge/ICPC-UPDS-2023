#include <iostream>
#include <tuple>

using namespace std;

int main() {
    // Crear un objeto tuple con cuatro valores
    tuple<int, string, double, char> mi_tupla(10, "Hola", 3.14, 'c');

    // Acceder y mostrar los valores de la tupla
    cout << "El primer valor de la tupla es: " << get<0>(mi_tupla) << endl;
    cout << "El segundo valor de la tupla es: " << get<1>(mi_tupla) << endl;
    cout << "El tercer valor de la tupla es: " << get<2>(mi_tupla) << endl;
    cout << "El cuarto valor de la tupla es: " << get<3>(mi_tupla) << endl;

    // Crear una tupla utilizando la función make_tuple
    auto persona = make_tuple("Juan", "Pérez", 25, "México");

    // Acceder y mostrar los valores de la tupla
    cout << "El nombre completo es: " << get<0>(persona) << " " << get<1>(persona) << endl;
    cout << "La edad es: " << get<2>(persona) << endl;
    cout << "El país de origen es: " << get<3>(persona) << endl;

    return 0;
}