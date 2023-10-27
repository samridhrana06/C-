// Let ' X' = 6,  A = 2 ,b = 4 
// After the
// first operation, the number of black balls is 8, and the
// number of
// white balls is 4.
// After the
// second operation, the number of black balls is 10, and the
// number of
// white balls is 8.
// After the
// third operation, the number of black balls is 12, and the
// number of
// white balls is 12.
// So, 3 operations are required to equal the number of black and white
// balls.

// sample input 
// 2
// 3 4 7
// 3 2 0

// sample output
// 1 
// -1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        long long x, a, b;
        cin >> x >> a >> b;
        long long diff = abs(a - b);
        long long ans = diff / 2;
        if (diff % 2 == 0) {
            cout << ans << endl;
        }
        else {
            cout << ans + 1 << endl;
        }
    }
    return 0;
}