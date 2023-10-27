// Problem Statement

// You are given a sorted array 'arr'of distinct values and a target
// value 'm'. You need to search for the index of the target value in
// the array.
// If the value is present in the array, return its index.
// If the value is absent, determine the index where it would be
// inserted in the array while maintaining the sorted order.


#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1,2,4,7};
    int m = 6;
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = n;
    int low = 0, high = n-1;

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == m){
            ans = mid;
            break;
        }

        else if(arr[mid] >= m){
            ans = mid;
            high = mid -1;

        }
        else{
            low = mid+1;
        }




    }
    cout<<ans;
}