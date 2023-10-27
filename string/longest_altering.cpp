// x1 <x2>x3    or x1 >x2 < x1
// input  = 1,5,4
// output = 3

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n-1;i++){
        if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1])){
            count++;
      
    }
    cout<<count;
    return 0;
}