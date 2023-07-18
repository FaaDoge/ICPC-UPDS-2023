#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (mp.find(s) == mp.end())
            mp.emplace(s, 0);
        mp[s]++;
    }

    vector<pair<int, string>> vs;
    for (auto p : mp) {
        pair<int, string> p2(p.second, p.first);
        vs.push_back(p2);
    }
    sort(vs.begin(), vs.end());

    int rem = n;
    int ans = vs.size();

    while (ans && ((vs[0].first != vs[ans-1].first && (ans == vs.size() || rem > vs[ans].first)) || vs.size() == 1)) {
        ans--;
        rem -= vs[ans].first;
        while (ans > 1 && vs[ans].first == vs[ans-1].first) {
            rem -= vs[ans-1].first;
            ans--;
        }

    }
    cout << ans << endl;
    vector<string> anss(ans);
    for (int i = 0; i < ans; i++)
        anss[i] = vs[i].second;
    sort(anss.begin(), anss.end());
    for (auto x : anss)
        cout << x << endl;

    return 0;
}
