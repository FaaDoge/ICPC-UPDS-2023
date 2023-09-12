#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> a(n), pre(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pre[i + 1] = pre[i] + a[i];
    }
    long long odd = 0, even = 1;
    for (int i = 1; i <= n; i++) {
        if (pre[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << odd * even << endl;
    return 0;
}