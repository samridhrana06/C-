#include<bits/stdc++.h>
using namespace std;

int main(){

// int a= 12345;

// approach 1


// int count=0;
// while (a>0)
// {
//     a=a/10;
//     count++;

// }
// cout<<count;


// approach 2

// string x = to_string(a);

// int size = x.length();

// cout<<size;


int a = 23;
int count=0;
int re;
int temp;
 temp = a;
while (a!=0)
{   
   
    re = a%10;
    if(temp%re == 0){
        count++;
    }
    a=a/10;
}
cout<<count;



    return 0;
}