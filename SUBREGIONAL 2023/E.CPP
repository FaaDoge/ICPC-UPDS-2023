#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int F[1000009];
 
int digitSum(int a)
{
    int sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
 
int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
 
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            F[x]++;
        }
        int ans = 0;
        for (int i = 1000000; i > 0; i--)
        {
            int num = i, sum = digitSum(i);
            F[num - sum] += F[i];
            if (k > F[i])
            {
                k -= F[i];
            }
            else
            {
                ans = sum;
                break;
            }
        }
        cout << ans << endl;
    return 0;
}