#include<bits/stdc++.h>
using namespace std;

int main(){

int a = 153;
int temp = a;
string s= to_string(a);
int size = s.length();
int ans =0;
while (a!=0)
{
    int mod = a%10;
    a = a/10;
    ans+= pow(mod,size);
}
//  if(a == ans){
//             cout<<"Yes";
//         }
//         else{
//             cout<< "No";
//         }

cout<<temp;
return 0;
}