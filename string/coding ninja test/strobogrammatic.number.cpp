// Problem Statement
// Given a length you need to find all the
// strobogrammatic numbers of length 'N'.
// A strobogrammatic number is a number that looks the
// same when rotated by 180.
// In other words, a number that on rotating right side up
// and upside down appears the same is a
// strobogrammatic number.
// '986' is
// rotating
// obtained .
// a strobogrammatic number because on
// '986' by 180 degrees,
// '986' will be

// Example 1:
// Input: N = 2
// Output: ["11","69","88","96"]
// Explanation: These are the 4 possible
// strobogrammatic numbers of length 2.
// Example 2:
// Input: N = 1
// Output: ["0","1","8"]
// Explanation: These are the 3 possible
// strobogrammatic numbers of length 1.
// Your Task:

// steps
// 1. create a map of strobogrammatic numbers
// 2. create a function to check if a number is strobogrammatic
// 3. create a function to generate all strobogrammatic numbers of length n
// 4. call the function in main
// 5. print the result

// explaination
// youtube video: https://www.youtube.com/watch?v=4eYOA6skjCI

#include <bits/stdc++.h>
using namespace std;

unordered_map<char, char> strobogrammaticMap = {
    {'0', '0'},
    {'1', '1'},
    {'6', '9'},
    {'8', '8'},
    {'9', '6'}
};

bool isStrobogrammatic(const string& num) {
    int n = num.size();
    for (int i = 0; i < n; i++) {
        if (strobogrammaticMap[num[i]] != num[n - i - 1]) {
            return false;
        }
    }
    return true;
}

void findStrobogrammaticHelper(string& num, int left, int right, vector<string>& result) {
    if (left > right) {
        if (num[0] != '0' || num.size() == 1) {
            result.push_back(num);
        }
        return;
    }
    for (auto& p : strobogrammaticMap) {
        num[left] = p.first;
        num[right] = p.second;
        if (left == right && p.first != p.second) {
            continue;
        }
        findStrobogrammaticHelper(num, left + 1, right - 1, result);
    }
}

vector<string> findStrobogrammatic(int n) {
    vector<string> result;
    string num(n, '0');
    findStrobogrammaticHelper(num, 0, n - 1, result);
    return result;
}

int main() {
    int n = 2;
    vector<string> result = findStrobogrammatic(n);

    for (const string& s : result) {
        cout << s << endl;
    }
    return 0;
}

