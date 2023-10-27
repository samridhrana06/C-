// Write an algorithm to find the number of occurrences of needle in a given positive number haystack.
//
// Input: two positive integers, haystack and needle
// Output: the number of occurrences of needle in haystack
// Example: input: 123123123 123
// Output: 3
#include <bits/stdc++.h>
using namespace std;

int main() {
    int haystack, needle;
    cin >> haystack >> needle;
    int count = 0;
    while (haystack > 0) {
        if (haystack % 10 == needle) {
            count++;
        }
        haystack /= 10;
    }
    cout << count << endl;
    return 0;
}
