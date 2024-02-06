#include<bits/stdc++.h>
using namespace std;

// void f(int n){
//     if(n==0){
//         return ;
//     }
// cout<<n<<" ";
//      f(n-1);
// }

void f(int n){
    if(n==0){
        return ;
    }
     f(n-1);

cout<<n<<" ";
}

int main(){

    int n;
    cin>>n;
    cout<<endl;
    f(n);
    return 0;
}