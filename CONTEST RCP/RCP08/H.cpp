#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr); cout.tie(nullptr); ios::sync_with_stdio(false);
    int c, profesjotos;
    cin >> c >> profesjotos;
    vector<long long> memo(c+1,9999999999);
    memo[0] = 0;
    for (int i = 0; i < profesjotos; i++) {
        vector<int> vs(4);
        cin >> vs[1] >> vs[2] >> vs[3];
        for (int j = c; j >= 0; j--)
            for (int k = 0; k <= 3; k++)
                if (j+k <= c && memo[j+k] > memo[j] + vs[k])
                    memo[j+k] = memo[j] + vs[k];
    }
    cout << memo[c] << endl;
}
