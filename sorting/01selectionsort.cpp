// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// int arr[] = { 1, 45, 54, 71, 76, 12 };
// int n = 6;
// // for (int i = 0; i < n; i++)
// // {
// //     swap(arr[i],*min_element(arr, arr + n));
// // }
// int mini;

// for (int i = 0; i <=n-2; i++)
// {
//     mini=i; ///giving the first element of arrray

//     for (int j = i; j <= n-1; j++)
//     {

//          if(arr[j] <arr[ mini])
//          {
//         mini = j; ///putting the value inside the container mini 
//          } 
//     }
    
// swap(arr[mini],arr[i]);
// //    int temp = arr[mini];
// //    arr[mini]=arr[i];
// //    arr[i]=temp;
// }

// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }



//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// void select_(int arr[], int n){
// int mini;
// for (int i = 0; i <= n-2; i++)
// {
//     mini = i;
//     for (int j = i; j <= n-1; j++)
//     {
//         if(arr[j] < arr[mini]){
//             mini = j;
//         }
//     }
// //    swap(arr[mini],arr[i]);

//     int temp = arr[mini];
//     arr[mini] = arr[i];
//     arr[i] = temp;
//    }
 


// }


// int main(){

// int arr[] = {9,46,24,52,20,13};
// int n = sizeof(arr)/sizeof(arr[0]);

// select_(arr,n);

// for (int i = 0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }


//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

int main() {

int arr[] = {9,46,24,52,20,13};
int n = sizeof(arr)/sizeof(arr[0]);

for (int i = 0; i <= n-2; i++)
{
    int mini = i;
    for (int j = i; j <=n-1; j++)
    {
        if(arr[j]<arr[mini]){
            mini = j;
        }
        // swap now
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    
}

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}


    return 0;
}



