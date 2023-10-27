// #include<bits/stdc++.h>
// using namespace std;

// int main(){


//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int t = 9;
//     int low = 0, high = n-1;
//     int ans =n;

//     while (low<=high)
//     {
//         int mid = (low+high)/2;

//         if(arr[mid] >= t){
//             ans = mid;
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//     }
//     cout<<"The answer is: "<<arr[ans];
//     return 0;


// }


// find the lower bound of the array {3,5,8,15,19}
#include<bits/stdc++.h>
using namespace std;
int main(){
    
        int arr[] = {3,5,8,15,19};
        int n = sizeof(arr)/sizeof(arr[0]);
        int t = 9;
        int low = 0, high = n-1;
        int ans = n;
    
        while (low<=high)
        {
            int mid = (low+high)/2;
    
            if(arr[mid] >= t){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        cout<<"The answer is: "<<arr[ans];
        return 0;
}
