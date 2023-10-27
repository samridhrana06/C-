#include<bits/stdc++.h>
using namespace std;

int main(){

int n =6;
int arr[] = {12,35,1,10,34,1};


// brute force 
// sort(arr,arr+n);

// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// // second largest element

// cout<<"second largest element: "<< arr[n-2];

// cout<<endl;



// finding the optimal solution

if(n==0 || n==1){
    cout<<-1;
}

int large = INT_MIN;
int secondlargest = INT_MIN;

for (int i = 0; i < n; i++)
{
    large = max(large,arr[i]);
}

for (int i = 0; i < n; i++)
{
    if(arr[i]>secondlargest && arr[i] != large)
    {
        secondlargest = arr[i];
    }
}

cout<<"second largest: "<<secondlargest;



    return 0;
}