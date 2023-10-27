#include<bits/stdc++.h>
using namespace std;

int main(){

int n = 9;
int arr[] = {2,2,1,3,1,1,3,1,1};
int arr1[]={};

for (int i = 0; i < n; i++)
{
    int count =0;
    for (int j = 1; j < n; j++) {
        /* code */
        if(arr[i] == arr[j]){
            count ++;
        }

    }

    if(count > n/2){
        cout<<"Answer is "<< arr[i];
        break;
    }
    
}

    return 0;
}