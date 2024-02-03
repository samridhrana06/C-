#include<bits/stdc++.h>
using namespace std;

int fact(int n){

    if(n==0 or n == 1) return 1;
    
    return fact(n-1)*n;
    
    }

    int main(){

        int r;
        r = fact(5);
        cout<<r;
        return 0;
    }