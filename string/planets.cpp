#include<bits/stdc++.h>
using namespace std;

int main(){

// these are 10 test cases
// 10
// 3 4
// 4 4
// 9 5
// 8 8
// 3 5
// 8 3
// 6 7
// 7 7
// 3 3
// 10 7

// take their sum one by one

int n;
cin>>n;
int sum=0;
while(n--){
    int a,b;
    cin>>a>>b;
    sum+=a*b;
}
cout<<sum<<endl;



    return 0;
}