#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "saveChangesInTheEditor";
    int n = s.length();
    string temp = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = tolower(s[i]);
            cout << endl;
        }
        else{
            s[i] = toupper(s[i]);
        }
        // storing in different containers
        temp += s[i];
   
        cout << temp;
        temp = "";
    }
    return 0;
}