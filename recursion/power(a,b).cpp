#include<bits/stdc++.h>
using namespace std;

int powerfunctio(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans = powerfunctio(a,b/2);

    //if b is even
    if(b%2 == 0){
        return ans*ans;
    }
    else{
        // if b is odd 
        a*ans*ans;
    }
}
int main(){

int a = 2;
int b = 5;

int ans = powerfunctio(a,b);
cout<<ans;

    return 0;
}