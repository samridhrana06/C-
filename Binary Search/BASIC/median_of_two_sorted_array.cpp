
// Explanation: The array after merging 'a' and 'b' will
// be { 1, 2, 3, 4, 5, 6 } . Here two medians are 3 and
// 4. So the median will be the average of 3 and 4,
// which is 3.5.

#include <bits/stdc++.h>
using namespace std;

int main(){

int arr1[] = {2,4,6};
int arr2[] = {1,3,5};

//merge two arrays
int n = sizeof(arr1) / sizeof(arr1[0]);
int m = sizeof(arr2) / sizeof(arr2[0]);
int arr3[n + m];
int i = 0, j = 0, k = 0;
while (i < n && j < m)  //merge two arrays
{
    if (arr1[i] < arr2[j])
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    else
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
while (i < n)  //if arr1 is left
{
    arr3[k] = arr1[i];
    i++;
    k++;
}
while (j < m)  //if arr2 is left
{
    arr3[k] = arr2[j];
    j++;
    k++;
}

//print the merged array

int size = n + m;
if (size % 2 != 0){
    cout << arr3[size / 2] << endl;
}
else{
    cout << (arr3[(size - 1) / 2] + arr3[size / 2]) / 2.0 << endl;
}

    return 0;
}