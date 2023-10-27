#include<bits/stdc++.h>
using namespace std;

void recur(int n){
if(n>0){
cout<<"GFG"<<" ";
recur(n-1);
}

return;
}

int main(){

int a =5;
recur(a);
    return 0;
}