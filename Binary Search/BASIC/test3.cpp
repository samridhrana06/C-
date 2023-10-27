// explain ths In a town the houses are marked with english letters. a town committee wants to renovate each house. because funds are limited, they decided to renovate only the houses marked with vowels. the committee headd gives the list of houses to the members and ask them to identify the house that will be renovated write an algorithem to help the committee members find the list of houses that will not be renovated
//
// Input: a string of english letters
// Output: a string of english letters
// Example: input: "aAbBcCdDeE"

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' &&
            s[i] != 'o' && s[i] != 'u' && s[i] != 'A' &&
            s[i] != 'E' && s[i] != 'I' && s[i] != 'O' &&
            s[i] != 'U') {
            ans += s[i];
        }
    }
    cout << ans << endl;
    return 0;
}
