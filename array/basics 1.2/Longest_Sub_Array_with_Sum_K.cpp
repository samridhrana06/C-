#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {-13, 0 ,6 ,15 ,16 ,2 ,15 ,-12, 17 ,-16 ,0 ,-3 ,19 ,-3 ,2 ,-9 ,-6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 15;
    // ----------------------------------Brute forece ------------------

    // int len;
    // for (int i = 0; i < n; i++) // first pointer
    // {
    //     for (int j = i; j < n; j++) // second pointer
    //     {
    //         int sum = 0;
    //         for (int k = i; k < j; k++)
    //         {
    //             sum += arr[k];

    //             if (sum == x)
    //             {
    //                 len = max(sum, j - i + 1);
    //             }
    //         }
    //     }
    // }

    // cout << len;


// -----------------------------Optimal solution --------------------------------
// using two pointers


int left =0 , right =0;

int sum = arr[0];

int maxLenght =0;

while (right<n)   ///right pointer will keep on going forward
{
    while (left<= right && sum >k )
    {
        sum -= arr[left];
        left++;
    }

    if(sum == k){
        maxLenght = max(maxLenght,right-left+1);
    }
    right++;
    if(right<n){
        sum+= arr[right];
    }
    
}


cout<<"The length is-> "<<maxLenght;

    return 0;
}

// 17 15
// -13 0 6 15 16 2 15 -12 17 -16 0 -3 19 -3 2 -9 -6