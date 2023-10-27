#include<bits/stdc++.h>
using namespace std;

bool arraycheck(int arr[] , int n){

int flag = 0;

for (int i = 0; i < n; i++)
{
    if(arr[i] < arr[i+1]){
        flag = 1;
    }
    else{
    flag = 0;
    }
}

if(flag == 0){
    return false;
}
else{
    return true;
}



}


int main(){

int n =5;
int arr[] = {10,20,30,40,50};


cout<<arraycheck(arr,n);
    return 0;
}