// You are given two numbers N and K. Your task is to find the total number of 
// weird numbers in the range 1 to N. A number is weird if thist number is not
//  divisible by K but the sum of digits of
// that number is divisible by K

// Input:
// 11 2
// Output:
// 1
// Explanation:
// the only weird number possible for the given input is 11, hence the answers is 1.

//sample input
// 21 3
//sample output
// 0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int temp = i;
        while (temp > 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (i % k != 0 && sum % k == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}