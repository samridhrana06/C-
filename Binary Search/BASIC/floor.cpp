// You're given an unsorted array 'A 'of 'N' integers and an integer
// 'Xt Find the floor and ceiling of 'X' in 'A[O..N-I]'.
// Floor of 'X' is the largest element in the array which is smaller
// than or equal to 'X'.
// Ceiling of 'X' is the smallest element in the array greater than or equal to x

//finding the floor

#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {4,3,8,4,7,10};
int n = sizeof(arr)/sizeof(arr[0]);
int ans = n;
int x =5;
sort(arr, arr+n);
int low = 0, high = n-1;

while (low<=high)
{
    int mid = (low+high)/2;

    if(arr[mid] < x){
        low = mid+1;
        ans = arr[mid];

    }
    else{
        high = mid-1;
    }
}

cout<<"The floor is: "<<ans;

    return 0;
}