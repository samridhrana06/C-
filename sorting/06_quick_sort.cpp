#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }


        if(i<j) swap(arr[i],arr[j]);
    }

    swap(arr[low],arr[j]);
    return j;
}

vector<int> qs(vector<int>&arr, int low, int high)
{

    if (low < high) // for checking the array has more than one element
    {
        int pindex = partition(arr, low, high); // to find the middle index

        qs(arr, low, pindex - 1); ////lower part sorting recursively

        qs(arr, pindex + 1, high); //// upper part solving recursively
    }
    return arr;
}

int main()
{

    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int size = arr.size();
    // cout << size;

    qs(arr,0,size-1);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    cout<<"Done with Quick sort";
    return 0;
}