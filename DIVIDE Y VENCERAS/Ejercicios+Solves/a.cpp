#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> arr, int start, int end) {
    if (start == end) {
        return arr[start];
    }
    int mid = start + (end - start) / 2;
    int sumLeft = sum(arr, start, mid);
    int sumRight = sum(arr, mid+1, end);
    return sumLeft + sumRight;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int result = sum(arr, 0, n-1);
    cout << "La suma de los elementos en el arreglo es: " << result << endl;
    return 0;
}