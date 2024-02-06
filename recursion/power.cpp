#include<bits/stdc++.h>
using namespace std;

int f(int n,int m){

    if(n==0){
        return 1;
    }

    return m*f(n-1,m);
}
int main(){
int n = 5;
int m = 2;
int ans = f(n,m);
cout<<ans;

    return 0;
}