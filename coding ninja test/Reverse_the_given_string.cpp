#include<bits/stdc++.h>
using namespace std;

int main(){

string s = "Hello";
//reverse the string 
int n = s.length();

for (int i = 0; i < n/2; i++)
{
    swap(s[i],s[n-i-1]);
}

cout<<s;
    return 0;
}