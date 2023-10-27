#include<bits/stdc++.h>
using namespace std;


int main(){

// creation of matrix of 2X2 of element {1,2}{3,4}  ;
    int n = 2;
    int a[n][n] = {{1,2},{3,4}};


    cout<<"Before rotation: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;  j < n;   j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<<"After rotation: "<<endl;

    for (int j = 0; j < n; j++)
    {
        for (int i = n-1; i >=0 ; i--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

return 0;
}