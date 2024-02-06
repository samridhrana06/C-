#include<bits/stdc++.h>
using namespace std;

int f(int n){

    if(n==0){
        return 1;
    }
    return n*f(n-1);
}
int main(){
int n = 4;
int ans = f(n);
cout<<ans;
    return 0;
}