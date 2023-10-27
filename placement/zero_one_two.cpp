//input 0 1 2 2 1 0
// output 0 0 1 1 2 2


#include<bits/stdc++.h>
using namespace std;

int main(){

// Initialize array and get its size
int arr[] = {0,1,2,2,1,0};
int size  = sizeof(arr)/sizeof(arr[0]);

// Initialize low, mid, and high pointers
int low = 0;
int mid = 0;
int high = size-1;

// Loop through array and swap elements based on their value
while(mid<=high){
    switch(arr[mid]){
        case 0:
            swap(arr[low++],arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid],arr[high--]);
            break;
    }
}

// Print out the sorted array
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}