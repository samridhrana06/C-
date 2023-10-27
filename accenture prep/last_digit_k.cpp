#include <iostream>
using namespace std;

int solve(int a, int b, int c) {
    if (b <= 9) {
        return 1;
    }
    int ans = 0;
    else {
        if (b % 10 == c) {
            ans++;
        }
        int sub = b - a;
        ans += sub / 10;
    }
    return ans;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int result = solve(a, b, c);
    cout << result << endl;
    return 0;
}