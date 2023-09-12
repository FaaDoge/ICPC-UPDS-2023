#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    string s;
    int k;
    cin >> s >> k;
    for (int i = 0; i < k; i++) {
        string tst = "";
        for (int ii = i; ii < s.size(); ii+=k) {
                tst.push_back(s[ii]);
        }
        sort(tst.begin(), tst.end());
        int piv = 0;
        string modified_s = s;
        for (int j = i; j < s.size(); j+=k) {
            modified_s[j] = tst[piv];
            piv ++;
        }
        s = modified_s;
    }
    cout << s << endl;
 
    return 0;
}