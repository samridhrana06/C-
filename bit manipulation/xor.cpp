// all the xor between 1 to n
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n =11;

    if(n%4 == 0){
        cout<<0;
    }

    else if(n%4 == 1){
        cout<<1;

    }
    else if(n%4 == 2){
        cout<<n+1;
    }
    else if(n%4 == 3){
        cout<<0;
    }

    return 0;
}