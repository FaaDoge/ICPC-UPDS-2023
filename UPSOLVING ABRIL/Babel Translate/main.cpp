#include <iostream>
#include <set>
using namespace std;
int main() {
    int n;
    cin >> n;

    set<int> nums;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.insert(num);
    }

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
