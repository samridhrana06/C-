#include<bits/stdc++.h>
using namespace std;

int main(){

    //creation of matrix of 5*5 
    int n = 5;
    int arr[n][n] = {{1,2,3,4,5},
                   {6,7,8,9,10},
                   {11,12,13,14,15},
                   {16,17,18,19,20},
                   {21,22,23,24,25}};

    //input



    int top =0, right = n-1;
    int bottom=n-1,left =0;

    while (left <= right && top <= bottom ){

        for (int i = top; i <= right; i++)
        {
            cout<<arr[top][i]<<" ";
        }
        top++;         // 1,2,3,4,5
        
        for (int i = top; i <= bottom ; i++)
        {
            cout<<arr[i][bottom]<<" ";
        }
        right--;
                    // 1,2,3,4
                    //       8
                    //       12

        for (int i = right; i >= left ; i--)
        {
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;   //1, 2,  3,   4
                    //            8
                    //9, 10,  11, 12


        for (int i = bottom ; i >=top  ; i--)
        {
            cout<<arr[i][left]<<" ";
        }
        left++;
        
        
        

    }
   
    return 0;
}