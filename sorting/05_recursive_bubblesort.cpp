// #include<bits/stdc++.h>
// using namespace std;

// void bubble(int arr[] , int n){

// if(n==1) return;
// for (int i = 0; i <= n-2; i++)
// {
//   if(arr[i] > arr[i+1]){
//     swap(arr[i],arr[i+1]);
//   }
    
// }
// bubble(arr,n-1);

// }


// int main(){

// int arr[] = {3,2,4,1,3};
// int n = sizeof(arr)/sizeof(arr[0]);
// bubble(arr,n);

// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }

//     return 0;
// }
























#include<bits/stdc++.h>
using namespace std;

void bsort(int arr[], int n){


if(n == 1) return;
for (int i = 0; i < n-1; i++)
{

if(arr[i]> arr[i+1]){
  swap(arr[i],arr[i+1]);
}

bsort(arr,n-1);


}


}


int main(){

int arr[] = {3,2,1,8,5,3};
int n = sizeof(arr)/sizeof(arr[0]);

bsort(arr,n);

for (int i = 0; i < n; i++)
{
  cout<<arr[i]<<" ";
}

  return 0;

}