// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// int n = 8;
// int arr[] = {2, 1, 0, 2, 1, 0, 2, 1};

// int low =0, mid =0,high =n-1;

// while(mid <= high){

//     if(arr[mid] == 0){
//         swap(arr[low],arr[mid]);
//         low++;
//         mid++;
//     }

//     if(arr[mid] == 1){

//         mid++;
//     }

//     if(arr[mid] == 2){
//         swap(arr[mid],arr[high]);
//         high --;
//     }
// }

// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main(){

    int n = 8;
    int arr[] = {2, 1, 0, 2, 1, 0, 2, 1};

    int low =0, mid =0,high =n-1;

    while(mid <= high){

        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }

        if(arr[mid] == 1){

            mid++;
        }

        if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high --;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}