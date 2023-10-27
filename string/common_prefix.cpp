#include <bits/stdc++.h>
using namespace std;

int main()
{
    // array of string with input 4
    string s[4] = {"abcd", "abc", "abref", "abcde"};

    // finding the smallest string from the array
    int mini = s[0].length();
    string minis = "";
    for (int i = 0; i < 4; i++)
    {
        if (s[i].length() < mini)
        {
            minis = s[i];
        }
    }

    // minis = {"abc"};
    // int j = 0;
    string ans = "";
    int size = sizeof(s) / sizeof(s[0]);
    for (int i = 0; i < minis.length(); i++)
    {
        char c = minis[i];
        for (int j = 0; j < size; j++)
        {
            if (s[j][i] != c)
            {
                cout << ans << endl;
                return 0;
            }
        }

        ans += c;
    }

    // for output
    cout << ans << endl;
}

#include <bits/stdc++.h>

string commonPrefix(vector<string> &arr, int n)
{

    string ans = arr[0];

    for (int i = 1; i < arr.size(); i++)

    {

        for (int j = 0; j < arr[i].size(); j++)

        {

            if (ans[j] != arr[i][j])

            {

                ans = arr[i].substr(0, j);

                break;
            }
        }
    }

    if (ans.length() == 0)
        return "-1";

    return ans;
}
