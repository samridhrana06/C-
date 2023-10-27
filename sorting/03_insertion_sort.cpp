#include<bits/stdc++.h>
using namespace std;

// void isort(int arr[] , int n){

// for (int i = 0; i <= n-1; i++)
// {
//     int j = i;

//     while ((j>0 )&& (arr[j-1]> arr[j]))
//     {
//         swap(arr[j-1], arr[j]);
//         j--;
//     }
    
// }


// }



void isort(int arr[],int n,int i){
    
if(i==n) return;

int j=i;
while ((j>0) && arr[j-1]>arr[j])
{
    swap(arr[j-1],arr[j]);
    j--;
}
isort(arr,n,i+1);


}

int main(){

int arr[] = {6,8,9,12,14,15,5};

int n = sizeof(arr)/sizeof(arr[0]);

isort(arr,n,0);

for (int  i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


    return 0;
}