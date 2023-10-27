// #include <bits/stdc++.h>
// using namespace std;

// void bubbles(int arr[], int n)
// {

//     for (int i = n - 1; i >= 0; i--) {
//         for (int j = 0; j <= i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int main()
// {

//     int arr[] = {13, 46, 24, 52, 20, 9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     bubbles(arr, n);

//     for (int i = 0; i < n; i++)
//     { 
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {9,46,24,52,20,13};
int n = sizeof(arr) / sizeof(arr[0]);

for (int i = 0 ; i < n ; i++)
{
    for(int j =0;j<n-1;j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


    return 0;

}