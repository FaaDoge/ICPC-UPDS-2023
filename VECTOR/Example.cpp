#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    cout << "El tamaño del vector es: " << v.size() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "El tamaño del vector es: " << v.size() << endl;

    cout << "Los elementos del vector son: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "El tamaño del vector es: " << v.size() << endl;

    v.clear();
    cout << "El tamaño del vector después de clear() es: " << v.size() << endl;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "Los elementos del vector son: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.erase(v.begin() + 1);
    cout << "Los elementos del vector después de erase() son: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.insert(v.begin() + 1, 15);
    cout << "Los elementos del vector después de insert() son: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.reserve(6);
    cout << "El tamaño del vector después de reserve() es: " << v.size() << endl;

    return 0;
}