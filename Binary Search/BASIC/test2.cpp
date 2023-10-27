// Bob has to send a secret code S to
// his boss. He designs a method to
// encrypt the code using two key
// values N and M. The formula that he
// uses to develop the encrypted code
// is shown below:
// Write an algorithm to help Bob
// encrypt the code.
//
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int s,n,m,ans;
    scanf("%ld %ld %ld",&s,&n, &m);
    ans=pow(s,n);
    ans=ans%10;
    ans=pow(ans,m);
    ans=ans%1000000007;
    printf("%ld",ans);
    return 0;
}