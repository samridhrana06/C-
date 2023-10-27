//rotate a sorted array by k elements

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>arr[high]) low=mid+1;
        else high=mid-1;
    }
    int pivot=low;
    low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        int realmid=(mid+pivot)%n;
        if(arr[realmid]==k){
            cout<<realmid;
            break;
        }
        else if(arr[realmid]<k) low=mid+1;
        else high=mid-1;
    }
    return 0;
}