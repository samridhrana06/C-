#include<bits/stdc++.h>
using namespace std;

int banana(int arr[],int i, int n){
    int sum = 0;
    for (int j = 0; j<n; j++)
    {
        sum += ceil(arr[j]/i);
    }
    return sum;
}
int computing (int arr[],int n, int h){

int reqtime = 0;
for (int i = 1; i < n; i++)
{
    reqtime = banana(arr,i,n);

    if(reqtime <= h){
        return i;
    }
}
return -1;
}


int main(){

int arr[] = {3,6,7,11};
int n = sizeof(arr)/sizeof(int);
int h = 8;
cout<<computing(arr,n,h);


    return 0;
}





