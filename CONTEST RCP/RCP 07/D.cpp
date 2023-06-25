#include <iostream>
#include <cmath>
using namespace std;

int maxRun(int n, int bits) {
    int curRun = 0, maxRun = 0, curBit = -1;
    for (int i = 0; i < bits; i++) {
        int bit = (n & (1 << i)) == 0 ? 0 : 1;
        if (bit != curBit) {
            curRun = 1;
            curBit = bit;
        }
        else
            curRun++;
        maxRun = max(maxRun, curRun);
    }
    return maxRun;
}

int main() {
    int n, k;
    cin >> n >> k;

    int res = 0;
    for (int i = 0; i < (1 << n); i++) {
        if (maxRun(i, n) <= k)
            res++;
    }

    cout << res << endl;
    return 0;
}
