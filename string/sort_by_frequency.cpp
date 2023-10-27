// You have been given a string 'S'. You need to sort 'S' in decreasing
// order based on the frequency of characters.
// Return the sorted string as mentioned above. If there are multiple
// answers, return any of them.
// Input: 
// s = "abAb"
// Output: "bbAa"
// Explanation: 'b' appears twice and 'a' appears twice. Now since
// 'b' > 'a', therefore 'bb' comes before 'aa'.

// with comments
#include <bits/stdc++.h>
using namespace std;

// comparator function to sort the map
bool cmp(pair<char, int> &a, pair<char, int> &b) {
    // if frequency of a is greater than b
    if (a.second > b.second) {
        return true;
    }
    // if frequency of a is equal to b
    else if (a.second == b.second) {
        // if a is greater than b
        if (a.first > b.first) {
            return true;
        }
    }
    return false;
}

// function to sort the string based on frequency of characters
string sortString(string s) {
    // map to store the frequency of characters
    map<char, int> mp;
    // iterate through the string
    for (int i = 0; i < s.length(); i++) {
        // if character is not present in the map
        if (mp.find(s[i]) == mp.end()) {
            // insert the character in the map
            mp.insert({s[i], 1});
        }
        // if character is present in the map
        else {
            // increment the frequency of the character
            mp[s[i]]++;
        }
    }
    // vector to store the characters and their frequency
    vector<pair<char, int>> v;
    // iterate through the map
    for (auto it = mp.begin(); it != mp.end(); it++) {
        // push the character and its frequency in the vector
        v.push_back({it->first, it->second});
    }
    // sort the vector based on frequency of characters
    sort(v.begin(), v.end(), cmp);
    // string to store the sorted string
    string ans = "";
    // iterate through the vector
    for (int i = 0; i < v.size(); i++) {
        // append the character in the string
        ans += string(v[i].second, v[i].first);
    }
    // return the sorted string
    return ans;
}

int main() {
    // Given string
    string s = "abAb";
    // Function call
    cout << sortString(s) << endl;
    return 0;
}

