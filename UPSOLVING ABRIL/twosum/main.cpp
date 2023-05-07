#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    unordered_set<int> seen;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int complement = k - x;
        if (seen.count(complement) > 0) {
            cout << min(x, complement) << " " << max(x, complement) << endl;
            return 0;
        }
        seen.insert(x);
    }
    cout << "no hay" << endl;
    return 0;
}
