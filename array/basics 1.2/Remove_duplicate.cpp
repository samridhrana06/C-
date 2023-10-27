#include<bits/stdc++.h>
using namespace std;


// void duplicate(int arr[] , int n){



//// brute force asśet takes  n(log n) time

//     set<int> st;
//     int index = 0;
//     for (int i = 0; i < n; i++)
//     {
//         st.insert(arr[i]);
//     }
//     for (auto i : st)
//     {
//         // cout<<i<<" ";

//         arr[index] = i;
//         index++;
//     }
    
    
// }


// optimal solution 

int duplicate(int arr[] , int n){


    int i= 0;
    int temp[n];

    int j=0;


// storing the value in temp array

    for (int i = 0; i < n-1; i++)
    {
        if(arr[i] != arr[i+1]){

            temp[j++] = arr[i]; // storing in temp
        }
    }
    temp[j++] = arr[n-1]; // storing in temp the last value


    // now i will modify the original array

    for (int i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }
    
    return j; 
    

}



int main(){

int n = 9;
int arr[] = {1,2,2,3,3,4,5,7,7};

int a =duplicate(arr,n);

for (int i = 0; i < a; i++)
{
    cout<<arr[i]<<" ";
}


    return 0;
}