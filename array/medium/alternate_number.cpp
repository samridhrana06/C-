#include<bits/stdc++.h>
using namespace std;

int main(){

// int n = 6;
// int arr[] = {3,1,-2,-5,2,-4};

// int posi[n/2],negi[n/2];
// int countp=0;
// int countn=0;
// for (int i = 0; i < n; i++)
// {
//     if(arr[i]%2 ==0){
//         posi[countp] = arr[i];
//         countp++;
//     }
//     else{
//         negi[countn] = arr[i];
//         countn++;
//     }
// }

// for (int  i = 0; i < n/2; i++)
// {
//     arr[i*2]=posi[i];
//     arr[(i*2)+1] = negi[i];
// }

// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }

int n = 6;
int arr[] = {3,1,-2,-5,2,-4};

int ans[n]={};
int posi =0, negi =1;
for (int i = 0; i < n; i++)
{
    if(arr[i] >0){
        ans[posi] = arr[i];
        posi+=2;
    }
    else{
        ans[negi] = arr[i];
        negi+=2;
    }
}
for (int i = 0; i < n; i++)
{
    cout<<ans[i]<<" ";
}


    return 0;
}