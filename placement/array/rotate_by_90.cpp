// rotate the matrix my 90 digree

#include<bits/stdc++.h>
using namespace std;

int main(){

    //initializing a matrix of size 3X3
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            cout<<a[j][i]<<" ";

        }
        cout<<endl;
        
    }
    
}