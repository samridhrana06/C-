// #include<bits/stdc++.h>
// using namespace std;

// int fibo(int a)
// {
// if(a<=1)
// return 1;

// return (fibo(a-1) + fibo(a-2));
// // cout<<a;
// }

// int main(){

// int n = 4;
// // fibo(n);
// for (int i = 0; i < n; i++)
// {
//     cout<<" "<<fibo(i);
// }

//     return 0;
// }



//fobonacci numbers


#include<bits/stdc++.h>
using namespace std;
void fibo(int a){
    int t1=0;
    int t2=1;
    int next;

    cout<<t1<<" "<<t2<<" ";
   next = t1+t2;

    while (next <= a)
    {
        cout<<next<<" ";
        t1=t2;
        t2=next;
        next= t1+t2;
    }
    
    
}

int main(){

int a=5;
fibo(a);
    return 0;
}