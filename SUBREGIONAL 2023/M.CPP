#include <iostream>
#include <vector>
using namespace std;
const int INF = 1e9;
int main() {
    int n; 
    cin >> n;

    vector<vector<int>> distancias(n, vector<int>(n, INF));
    vector<vector<int>> original(n, vector<int>(n, INF));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> distancias[i][j];
            original[i][j] = distancias[i][j];
        }
    }
    for (int k = 0; k < n; ++k) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                distancias[i][j] = min(distancias[i][j], distancias[i][k] + distancias[k][j]);
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (distancias[i][j] != original[i][j]) {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    int cuenta = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if (k != i && k != j && distancias[i][j] == distancias[i][k] + distancias[k][j]) {
                    cuenta++;
                    break;
                }
            }
        }
    }

    cout << cuenta << endl;

    return 0;
}
