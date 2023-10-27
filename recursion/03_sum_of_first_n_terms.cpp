#include<bits/stdc++.h>
using namespace std;
// int sum =0;
int recur(int n){
if(n==0){
    return 0;
}
return pow(n,3)+recur(n-1);
}
int main(){

int n = 50000;

cout<<recur(n);


    return 0;
}