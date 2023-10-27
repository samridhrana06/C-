#include<bits/stdc++.h>
using namespace std;

int main(){

int n= 5;
int arr[] = {1, 2, 3, 4, 5};
int d = 2;
// int rotate = 2;

// int k = rotate % n;

// int temp[k];

// for (int i = 0; i < k; i++)
// {
//     temp[i] = arr[i];
// }


// for (int i = k; i < n; i++)
// {
//     arr[i-k] = arr[i];
// }
// int nk = k;
// for (int i =0 ; i < k; i++)
// {
//     arr[n-nk] = temp[i];
//     nk--;
// }


reverse(arr,arr+d);
reverse(arr+d,arr+n);
reverse(arr,arr+n);


for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


    return 0;
}