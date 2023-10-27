#include<bits/stdc++.h>
using namespace std;

int main(){

int n1 = 5;
int n2 = 10;
int mini = min(n1,n2);
int maxi = max(n1,n2);
int ans = INT_MIN;
int lcm =INT_MIN;
for (int i = 1; i <= mini; i++)
{
    if(n1 % i==0 && n2 % i == 0){
        ans = max(i,ans);
    }
}
for (int i = 1; i <= maxi; i++)
{
    if(i%n1 == 0 && i%n2 == 0){
        lcm = max(i,lcm);
    }
}


cout<<ans << " "<< lcm;

    return 0;
}