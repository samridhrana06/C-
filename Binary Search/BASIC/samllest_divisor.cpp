#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {1,2,5,9};
int t = 6;
int n = sizeof(arr)/sizeof(int);
int maxi = INT_MIN;
for (int i = 0; i < n; i++)
{
    maxi = max(maxi,arr[i]);
}
int sum =0;
for (int i = 1; i < maxi; i++)
{
    /* code */
    for (int j = 1; j <= n; j++)
    {
        sum += ceil((double)arr[j]/i);
    }
    if(sum < t){
        cout<<i;
        break;
    }
    else{
        sum = 0;

    }
    
}


    return 0;
}