#include<bits/stdc++.h>
using namespace std;

int main(){


    int n = 5;
    int arr[] = {2,6,5,8,11};
    int target = 14;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; i++)
        {
            if(arr[i] + arr[j] == target){
                cout<<"Found at index : "<<j <<" and "<<i;
                break;
            }
        }
        
    }
    
}