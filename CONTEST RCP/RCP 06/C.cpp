#include <bits/stdc++.h>
using namespace std;
constexpr int INF = numeric_limits<int>::max();
int main()
{
    int n, q;
    cin >> n >> q;
    set<int> broken;

    while (q--) {
        char c;
        cin >> c;
        if (c == '?') {
            int a, b;
            cin >> a >> b;
            if (a > b) swap(a, b);
            auto ita = broken.lower_bound(a), itb = broken.lower_bound(b);
            int aa = (ita == broken.end()) ? INF : *ita;
            int bb = (itb == broken.end()) ? INF : *itb;
            if (aa > b || bb > a + n) {
                cout << "possible\n";
            } else {
                cout << "impossible\n";
            }
        } else {
            int a;
            cin >> a;
            if (c == '-') {
                broken.insert(a);
                broken.insert(a + n);
            } else {
                broken.erase(a);
                broken.erase(a + n);
            }
        }
    }
}
