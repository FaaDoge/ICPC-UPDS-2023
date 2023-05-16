#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Función que encuentra la distancia euclidiana entre dos puntos
double dist(pair<double, double> p1, pair<double, double> p2) {
    double x_diff = p1.first - p2.first;
    double y_diff = p1.second - p2.second;
    return sqrt(x_diff * x_diff + y_diff * y_diff);
}

// Función que busca el punto medio más cercano en un conjunto de puntos
double closestPair(vector<pair<double, double>> &points, int left, int right) {
    // Caso base: si hay menos de dos puntos, la distancia es infinita
    if (right - left < 2) {
        return INFINITY;
    }
    
    // Dividir y conquistar
    int mid = (left + right) / 2;
    double d = min(closestPair(points, left, mid), closestPair(points, mid, right));
    
    // Buscar puntos en la franja central
    vector<pair<double, double>> strip;
    for (int i = left; i < right; i++) {
        if (abs(points[i].first - points[mid].first) < d) {
            strip.push_back(points[i]);
        }
    }
    
    // Comprobar pares de puntos en la franja central
    sort(strip.begin(), strip.end(), [](const pair<double, double>& p1, const pair<double, double>& p2) {
        return p1.second < p2.second;
    });
    
    for (int i = 0; i < strip.size(); i++) {
        for (int j = i + 1; j < strip.size() && strip[j].second - strip[i].second < d; j++) {
            d = min(d, dist(strip[i], strip[j]));
        }
    }
    
    return d;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de puntos: ";
    cin >> n;
    
    // Leer puntos
    vector<pair<double, double>> points(n);
    cout << "Ingrese los puntos (x y): " << endl;
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }
    
    // Ordenar puntos por coordenada x
    sort(points.begin(), points.end());
    
    // Encontrar el punto medio más cercano
    double d = closestPair(points, 0, n);
    cout << "El punto medio mas cercano es: " << d << endl;
    
    return 0;
}