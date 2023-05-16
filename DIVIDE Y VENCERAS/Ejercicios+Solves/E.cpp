#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<pair<int, int>> findPairs(vector<int>& arr, int target) {
    vector<pair<int, int>> result;
    unordered_map<int, int> map;
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (map.find(complement) != map.end()) {
            result.push_back(make_pair(arr[i], complement));
        }
        map[arr[i]] = i;
    }
    return result;
}

int main() {
    int n, target;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Ingrese el valor de la suma: ";
    cin >> target;
    vector<pair<int, int>> pairs = findPairs(arr, target);
    if (pairs.empty()) {
        cout << "No se encontraron pares que sumen " << target << endl;
    } else {
        cout << "Los pares que suman " << target << " son:" << endl;
        for (auto p : pairs) {
            cout << "(" << p.first << ", " << p.second << ")" << endl;
        }
    }
    return 0;
}