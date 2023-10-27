#include<bits/stdc++.h>
using namespace std;
// int i =1;

void recur(int n){

if (n>0)
{
    recur(n - 1);
     cout << n << " ";

    
   
}
return ;
}


int main(){

int n =5;
recur(n);
    return 0;
}