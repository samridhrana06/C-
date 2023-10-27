#include<bits/stdc++.h>
using namespace std;

int main(){

    string a ="2";
    string b ="10";

    int aa = stoi(a);
    int bb = stoi(b);

    int result = pow(aa,bb);
    string tostring = to_string(result);

    int lenghtofstring = tostring.length();

    int arr[] ={};

    // for (int i = 0; i < lenghtofstring; i++)
    // {
    //     arr[i] = 
    // }
    
    cout<<tostring[lenghtofstring-1];

    
    

return 0;
}