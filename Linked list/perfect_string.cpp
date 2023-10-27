// A String 'str' of size 'n' is said to be a perfect string only if 
// there is no pair of indices [i,j] such that 1<= i <j <= 'n' and str[i]= '1' and str[j] ='0.

// You are given a 
// binary string S of size N. Your task is to print the 
// minimum number of operations required to make Sa Perfect String 
// In each operation, you can choose an index 'T' 
// in the range [1, M] (where M is the current size of the string) and delete 
// the character at the ith postion.

// Input:
// 6 
// 010101
// Output:
// 2
// explanation:
// In the first operation delete the character at the 3rd position now the new string in "01101",
//  In the second operation delete the character at the 
// 4th position now the string "0111", which is a perfect string. Hence, the answer is 2.
//input
// 3
// 000
//output
// 0

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}

