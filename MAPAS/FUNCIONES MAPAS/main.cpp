//MAPAS O CONJUNTOS

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Crear un mapa de strings a int
    map<string, int> mi_mapa;

    // Insertar algunos elementos en el mapa
    mi_mapa.insert(pair<string, int>("Juan", 25));
    mi_mapa.insert(make_pair("Maria", 30));
    mi_mapa["Pedro"] = 28;

    // Obtener el número de elementos del mapa
    cout << "El mapa tiene " << mi_mapa.size() << " elementos" << endl;

    // Comprobar si el mapa está vacío
    if (mi_mapa.empty()) {
        cout << "El mapa está vacío" << endl;
    } else {
        cout << "El mapa no está vacío" << endl;
    }

    // Eliminar un elemento del mapa utilizando su clave
    mi_mapa.erase("Maria");

    // Buscar un elemento en el mapa utilizando su clave
    auto it = mi_mapa.find("Pedro");
    if (it != mi_mapa.end()) {
        cout << "La edad de Pedro es: " << it->second << endl;
    } else {
        cout << "Pedro no está en el mapa" << endl;
    }

    // Eliminar todos los elementos del mapa
    mi_mapa.clear();

    // Insertar algunos elementos en el mapa utilizando un rango de pares clave-valor
    map<string, int> otro_mapa;
    otro_mapa.insert(mi_mapa.begin(), mi_mapa.end());

    // Acceder a un elemento del mapa utilizando su clave
    otro_mapa["Juan"] = 27;

    // Contar el número de elementos con una determinada clave en el mapa
    int count = otro_mapa.count("Juan");
    cout << "Hay " << count << " elementos con la clave 'Juan'" << endl;

    // Obtener un iterador apuntando al primer elemento del mapa
    auto iter = otro_mapa.begin();

    // Recorrer el mapa utilizando el iterador
    while (iter != otro_mapa.end()) {
        cout << "Clave: " << iter->first << ", Valor: " << iter->second << endl;
        ++iter;
    }

    // Obtener un iterador inverso apuntando al último elemento del mapa
    auto riter = otro_mapa.rbegin();

    // Recorrer el mapa en orden inverso utilizando el iterador inverso
    while (riter != otro_mapa.rend()) {
        cout << "Clave: " << riter->first << ", Valor: " << riter->second << endl;
        ++riter;
    }

    // Obtener un iterador apuntando al primer elemento con una clave mayor o igual a la clave especificada
    auto lb_iter = otro_mapa.lower_bound("Juan");
    if (lb_iter != otro_mapa.end()) {
        cout << "El primer elemento con clave mayor o igual a 'Juan' es: " << lb_iter->second << endl;
    } else {
        cout << "No hay elementos con clave mayor o igual a 'Juan'" << endl;
    }
// Obtener un iterador apuntando al primer elemento con una clave mayor a la clave especificada
    auto ub_iter = otro_mapa.upper_bound("Juan");
    if (ub_iter != otro_mapa.end()) {
        cout << "El primer elemento con clave mayor a 'Juan' es: " << ub_iter->second << endl;
    } else {
        cout << "No hay elementos con clave mayor a 'Juan'" << endl;
    }

    // Obtener un par de iteradores que definen un rango de elementos con claves en el intervalo especificado
    auto range = otro_mapa.equal_range("Juan");
    cout << "Los elementos con clave 'Juan' son: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;

    return 0;
}
