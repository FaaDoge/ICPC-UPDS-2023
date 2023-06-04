#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<bool> segments(n, true); // Initialize all segments as open

    for (int i = 0; i < q; i++) {
        char event;
        int a, b;
        cin >> event;

        if (event == '?') {
            cin >> a >> b;

            if (segments[a - 1] && segments[b - 1])
                cout << "possible\n";
            else
                cout << "impossible\n";
        } else {
            cin >> a;
            segments[a - 1] = (event == '+');
        }
    }

    return 0;
}
