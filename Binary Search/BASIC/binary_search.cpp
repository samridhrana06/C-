#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 4;
    int size = sizeof(arr) / sizeof(arr[0]);

    int low = 0, high = arr[size - 1];

    int flag = 0;

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            cout << "Found the element " << mid;
            break;
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return 0;
}