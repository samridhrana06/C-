#include<bits/stdc++.h>
using namespace std;

int main(){

int n = 3;
int l = 5;

int xor1=0,xor2=0;
for (int i = 0; i < n; i++)
{
    xor1^=i;
}

for (int i = 0; i < l; i++)
{
    xor2 ^= i;
}


int ans = xor1^xor2;

cout<<ans;
    return 0;
}