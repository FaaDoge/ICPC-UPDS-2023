#include <iostream>
 
using namespace std;
 
int main() {
    int N, H;
    cin >> N >> H;
    
    int count = 0;
    for (int i = 0; i < N; ++i) {
        int ride_height;
        cin >> ride_height;
        
        if (ride_height <= H) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}