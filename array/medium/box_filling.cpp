#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 2;
    int x = 4;
    int y = 3;

    // number of balls that a has is
    int a = n*x;

    //we will be needing b boxes
    cout<<ceil((double)a/y);

return 0;
}