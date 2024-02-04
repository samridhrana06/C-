#include<bits/stdc++.h>
using namespace std;

int Power(int m,int n)
{
    if(n==0){
        return 1;
    }

    return Power(m,n-1)*m;
}
int main(){

int r = Power(3,94);
cout<<r;


    return 0;
}