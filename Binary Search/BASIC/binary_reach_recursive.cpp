#include<bits/stdc++.h>
using namespace std;


int doing_search(int arr[], int low, int high, int target){

if(low>high) return -1;

int mid = (low+high)/2;

if(arr[mid] == target) return mid;

else if(target > arr[mid]) return doing_search(arr,mid,high,target);

else return doing_search(arr,low,mid-1,target);

}

int main(){

int arr[] = {3, 4, 6, 7, 9, 12, 16, 17};
int high = sizeof(arr)/sizeof(arr[0]);
int target = 16;
int low=0;
cout<<doing_search(arr,low,high-1,target);

    return 0;
}