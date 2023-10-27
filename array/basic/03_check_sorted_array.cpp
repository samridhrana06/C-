#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {1,2,3,4,5};

int n = sizeof(arr)/ sizeof(arr[0]);

int begin = arr[0];

int flag = 0;
for (int i = 0; i < n-1; i++)
{
    /* code */
    if(arr[i] < arr[i+1]);


    else{
        flag = -1;
    }
}

if(flag == 0){
    cout<<"sorted";
}
else{
    cout<<"Not Sorted";
}

    return 0;
}