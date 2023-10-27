#include<bits/stdc++.h>
using namespace std;


int main(){

    string s = "wisdom begins in wonder";
    int l= s.length();
    int circumfrance = 20;


    cout<<"Before Wrap"<<endl;
    cout<<endl;

for (int i = 0; i < s.length(); i++)
    {
        cout<<s[i];
    }
    
    cout<<endl;

    string cuts = "";

    for (int i = circumfrance; i < l; i++)
    {
        cuts += s[i];
    }

    // for (int i = 0; i < cuts.length(); i++)
    // {
    //     cout<<cuts[i];
    // }
    

    string ans ="";
 for (int i = 0; i < cuts.length(); i++)
    {
        ans += cuts[i];
    }


    // adding after the length of cuts

    for(int i = cuts.length();i<circumfrance;i++){
        ans+= s[i];
    }


    cout<<"After Wrap"<<endl;
    cout<<endl;
    
    for (int i = 0; i < circumfrance; i++)
    {
        cout<<ans[i];
    }
    

    return 0;
}