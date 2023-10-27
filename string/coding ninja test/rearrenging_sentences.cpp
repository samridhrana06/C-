#include <bits/stdc++.h>
using namespace std;

int main()
{

    string arr[] = {"d1 2 3", "love8 coding world", "a1 coding ninjas"};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<string> charst;
    vector<string> intst;
    vector<string> ans;

    // char lastdigit;
    for (int i = 0; i < n; i++)
    {
        //lenght of the string 
       char lastdigit = arr[i][arr[i].length()-1];

        // int(lastdigit);
    // cout<<lastdigit<<endl;
    // break;
        if (arr[i][lastdigit] >= 'a' && arr[i][lastdigit] <= 'z')
        {
            charst.push_back(arr[i]);
            // break;
        }
        else
        {
          intst.push_back(arr[i]);
            // break;
        }
    }

    // sort the charst
    // sort(charst.begin(), charst.end());

    // printing the charst
    for (int i = 0; i < charst.size(); i++)
    {
        cout << charst[i] << endl;
    }

    // printing the intst
    for (int i = 0; i < intst.size(); i++)
    {
        cout << intst[i] << endl;
    }
}
