#include<bits/stdc++.h>
using namespace std;

int main(){

int a = 12;
int temp =a;
int ans = 0;
int i =0;
while (a!=0){
    int re = a%10;
    a = a/10;
    ans = ans*10 +re;
    
}

if(ans == temp){
    cout<<"palindrome";
}
else{
    cout<<"Not palindrome";
}
// cout<<ans;

    return 0;
}