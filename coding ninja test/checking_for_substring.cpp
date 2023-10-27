#include <bits/stdc++.h>
using namespace std;
int substring(string s1,string s2){

if(s1.find(s2)!=string::npos){
    return s1.find(s2);
}

    return -1;
}
int main()
{

    string s1 = "geeksforgeeks";
    string s2 = "fork";

    // int n = s1.length();
    // int m = s2.length();
    // int flag = 0;
    // for (int i = 0; i < n-m; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < m; j++)
    //     {
    //         if (s1[i+j] == s2[j])
    //         {
    //             count++;
    //         }
    //         if (count == m)
    //         {
    //             // flag = 1;
    //             cout<<i<<" "<<endl;
    //             break;
    //         }
    //     }
    //      if(flag==1){
    //     break;
    // }
    // }

    // if(flag==1){
    //     cout<<"Present";
    // }
    // else{
    //     cout<<"Not Present";
    // }

    int res = substring(s1,s2);

    if(res==-1){
        cout<<"Not a substring";
    }
    else{
        cout<<"It is substring at position: "<<res;
    }

    return 0;
}