#include<bits/stdc++.h>
using namespace std;

void reve(int i,int j,string&s){

if(i>j){
    return ;
}

swap(s[i],s[j]);
return reve(i+1,j-1,s);
}

int main(){

string s = "abcd";
reve(0,s.length()-1,s);
cout<<s;
    return 0;
}