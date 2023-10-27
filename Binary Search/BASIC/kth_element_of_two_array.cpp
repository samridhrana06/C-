// Explanation: The merged array will be [2, 3, 4, 6, 7,8, 45].
//  The element at position '4' of this array is
// 6. Hence we return 6.


#include<bits/stdc++.h>
using namespace std;

int main(){

int arr1[] = {2,3,45};
int arr2[] = {4,6,7,8};
int k = 4;
int n = sizeof(arr1) / sizeof(arr1[0]);
int m = sizeof(arr2) / sizeof(arr2[0]);
int i = 0, j = 0, q=0;
while (i<n && j<m){

if(arr1[i] < arr2[j]){
    q++;
    if(q == k){
        cout << arr1[i] << endl;
        break;
    }
    i++;
}
else{
    q++;
    if(q == k){
        cout << arr2[j] << endl;
        break;
    }
    j++;
}
}
while (i<n){
    q++;
    if(q == k){
        cout << arr1[i] << endl;
        break;
    }
    i++;
}
while (j<m){
    q++;
    if(q == k){
        cout << arr2[j] << endl;
        break;
    }
    j++;
}
 


    return 0;
}