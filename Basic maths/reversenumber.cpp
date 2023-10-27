// #include<bits/stdc++.h>
// using namespace std;

// int main(){ 

// int a = 123;
// int temp;
// int re;
// temp = a;
// int reverse =0;
// while (a!=0)
// {
//     re = a%10;
//     a = a/10;
//     reverse = reverse*10+re;
    
// }
// cout<<reverse;

//     return 0;
// }




// findinğthe bits
#include<bits/stdc++.h>
// #include<math.h>
using namespace std;

int main(){

int a = 1000;
int ans =0;
int i =0;
while (a!=0)
{
    int bit = a &1;
    ans = (bit * pow(10,i)) + ans;

    a= a>>1;
    i++;

}

cout<<ans;
    return 0;
}

