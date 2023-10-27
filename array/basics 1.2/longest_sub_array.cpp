#include<bits/stdc++.h>
using namespace std;

int main(){

int left =0 , right =0;

int arr[] = {1,2,3,1,1,1,1,4,2,3};
int k =3;
int size = sizeof(arr)/sizeof(arr[0]);
int sum = arr[0];
int max_length = INT_MIN;

while (right<size)
{
    while (left<= right && sum>k)
    {
        sum -= arr[left];
        left ++;
    }

    if(sum == k ){
        max_length = max(max_length,right-left+1);
    }


    right++;

    if(right < size){ 
        sum+= arr[right];
    }
    
}
cout<<max_length;


    return 0;
}