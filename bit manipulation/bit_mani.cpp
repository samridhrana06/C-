#include<bits/stdc++.h>
using namespace std;

int main(){

int n = 25;
int i = 3;

int mask = 1<<i-1;
//find the bit value at position i in easy steps
int ans = n&mask;

cout<<ans;



    return 0;
}