#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {12, 35, 1, 10, 34, 1, 35};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    int largest = arr[n-1];
    int secondlargest = -1;

    for (int i = 0; i < n-1; i++)
    {
        /* code */
        if (arr[i] > secondlargest && arr[i] < largest)
        {
            secondlargest = arr[i];
        }
    }

    cout << secondlargest;

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    return 0;
}