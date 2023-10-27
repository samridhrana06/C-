// You are playing an online game. In the game, a list of N numbers is given. The player has to arrange the numbers so that all the odd numbers of the list come after the even numbers.

// Write an algorithm to arrange the given list such that all the odd numbers of the list come after the even numbers.

// Input: a list of N numbers
// Output: a list of N numbers
// Example: input: [1, 2, 3, 4, 5, 6, 7, 8, 9]
// Output: [2, 4, 6, 8, 1, 3, 5, 7, 9]
#include <bits/stdc++.h>    
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int& i : v) {
        cin >> i;
    }
    vector<int> ans;
    for (int i : v) {
        if (i % 2 == 0) {
            ans.push_back(i);
        }
    }
    for (int i : v) {
        if (i % 2 == 1) {
            ans.push_back(i);
        }
    }
    for (int i : ans) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
