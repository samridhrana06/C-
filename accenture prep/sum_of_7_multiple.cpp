//Given a range [A, B], find sum of integers divisible by 7 in this range.

// input a=1,b=7;
// output : 7

// input a = 99
// b=115

// output : 217

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=99,b=115;
    // cin>>a>>b;
    int sum=0;
    for(int i=a;i<=b;i++)
    {
        if(i%7==0)
        {
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
