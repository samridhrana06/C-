#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int n = 6;
    // int arr[]{1, 4, 3,2,6};
    // // sort(arr, arr + n);
    // int flag =1;

    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = 0; j < n-1; i++)
    //     {
    //         if(arr[j] == i){
    //             flag +=1;
    //             // break;
    //         }
    //     }
        
    // }

    // cout<<flag;


// ----------------------------------------using hashing-------------------------------



    // int n = 4;
    // int arr[]={2,1,3};
    // int size_array = sizeof(arr)/sizeof(arr[0]);

    // int ha[n+1 ]={0};







// storing in hash
    // for (int i = 0; i < size_array; i++)
    // {
    //    ha[arr[i]] =1;

    // }

// for (int i = 0; i < n+1; i++)
// {
//     cout<<ha[i]<<" ";
// }

// //checking if the element has 0 or 1 in the hash

    // for (int i = 1; i < n+1; i++)
    // {
    //     if(ha[i] == 0){
    //         cout<<"The element is: "<<i;
    //         break;
    //     }
    // }
    



// --------------------------------optimal solution-------------------------------------



int n = 8;
int arr[]={8 ,1 ,3 ,4 ,7 ,5 ,6};
int sum1=0;
int sum2=0;
int sizeofarr=sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < sizeofarr; i++)
{
    sum1 += arr[i]; 
}
for (int i = 1; i <= n; i++)
{
    sum2+=i;
}

cout<<"The answer is: "<<sum2-sum1;

    return 0;
}