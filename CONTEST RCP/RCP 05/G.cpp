#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define debug(...) //ignore
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef long double ld;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);
  int numElements, k;
  cin >> numElements >> k;
  vector<ld> probabilities(numElements);
  rep(i,0,numElements) cin >> probabilities[i];
  sort(all(probabilities));
  reverse(all(probabilities));

  vector<ld> dp(2*numElements+10);
  int offset = numElements+5;
  dp[offset] = 1;

  ld answer = 0;
  rep(i,0,numElements) {
    vector<ld> newDp(2*numElements+10);
    rep(j,1,sz(dp)-1) {
      newDp[j] = probabilities[i]*dp[j-1] + (1-probabilities[i])*dp[j+1];
    }
    swap(dp,newDp);
    ld cur = 0;
    rep(j,k,numElements+1) cur += dp[offset+j];
    answer = max(answer, cur);
  }

  cout << setprecision(14) << fixed;
  cout << answer << endl;
}

