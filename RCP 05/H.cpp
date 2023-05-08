#include <bits/stdc++.h>
using namespace std;

#define fio cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);

int main() {
    fio
    int n;
    cin >> n;
    vector<long long> alturas(n);
    vector<long long> izquierda(n, 0), derecha(n, 0);
    for(int i = 0; i < n; i++){
        cin >> alturas[i];
    }
    // Puntos de izquierda o inicios
    for(int i = 1; i < n; i++){
        if(alturas[i] >= alturas[i-1]){
            izquierda[i] = 1 + izquierda[i-1];
        }
    }
    // Finales de monta;a
    for(int i = n-2; i >= 0; i--){
        if(alturas[i] >= alturas[i+1]){
            derecha[i] = 1 + derecha[i+1];
        }
    }
    long long maxima_altura = 0;
    for(int i = 0; i < n; i++){
        long long altura = min(alturas[i]-alturas[i-izquierda[i]], alturas[i]-alturas[i+derecha[i]]);
        maxima_altura = max(maxima_altura, altura);
    }
    cout << maxima_altura << "\n";
    return 0;
}
