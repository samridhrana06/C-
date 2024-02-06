#include<bits/stdc++.h>
using namespace std;

bool Sorted(int *arr, int size){

    //base case
    if(size==0 or size == 1){
        return true;
    }
    // check conditin
    if(arr[0]>arr[1]){
        return false;
    }

    bool ans = Sorted(arr+1,size-1);
    return ans;
}

int main(){

int arr[5] = {2,4,5,6,9};
int size = 5;
bool ans = Sorted(arr,size);
// cout<<ans;
if(ans == true){
    cout<<"Array is sorted";
}
else{
    cout<<"Array is not sorted";
}
    return 0;
}