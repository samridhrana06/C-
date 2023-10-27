#include<bits/stdc++.h>
using namespace std;

int main(){

int n = 5;

int arr[] = {1,8,7,56,90};

int max = INT_MIN;

for (int i = 0; i < n; i++)
{
    if(arr[i] > max){
        max=arr[i];
    }
}
cout<<max<<" ";


    return 0;
}