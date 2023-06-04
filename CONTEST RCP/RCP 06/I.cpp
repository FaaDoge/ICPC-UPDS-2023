#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

constexpr ll LeMaxo = 0x3f3f3f3f3f3f3f3fLL;

int main() {
	ll n, m; cin >> n >> m;
	vector<ll> cost(n+1, LeMaxo);
	cost[0] = 0;

	for (ll i = 0; i < n; i++) {
		ll c0; cin >> c0;
		for (ll j = 1; j <= min(m, n - i); j++) {
			ll cj; cin >> cj;
			cost[i+j] = min(cost[i+j], cost[i] + c0 - cj);
		}
	}
	cout << cost.back() << endl;

	return 0;
}
