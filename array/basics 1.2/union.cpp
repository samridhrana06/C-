#include <bits/stdc++.h>
using namespace std;

int main()
{

    // ---------------------------------------------brute force -----------------------------------

    // int arr1[] = {1,1,2,3,4,5};
    // int arr2[]  = {1,2,3,4,5,6};
    // int size1 = sizeof(arr1) / sizeof(arr1[0]);
    // int size2 = sizeof(arr2) / sizeof(arr2[0]);
    // set<int>st;

    // for (int i = 0; i < size1; i++)
    // {
    //     st.insert(arr1[i]);
    // }

    // for (int i = 0; i < size2; i++)
    // {
    //     st.insert(arr2[i]);
    // }

    // for (auto i : st)
    // {
    //     cout<<i<<" ";
    // }

    //  --------------------------------------------optimal solutions -----------------------------

    vector<int> uni;
    int arr1[] = {1, 1, 2, 3, 4, 5};

    int arr2[] = {1, 2, 3, 4, 5, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int i = 0;
    int j = 0;

    // cheching if the array we are doing union is between the length

    while (i < size1 && j < size2)
    {

        if (arr1[i] <= arr2[j])
        {
            if (uni.size() == 0 || uni.back() != arr1[i])
            {
                uni.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (uni.size() == 0 || uni.back() != arr2[j])
            {
                uni.push_back(arr2[j]);
            }
            j++;
        }
    }


    // checking if array 1 have some remaining elements

    while (i < size1)
    {
        if (uni.size() == 0 || uni.back() != arr1[i])
        {
            uni.push_back(arr1[i]);
        }
        i++;
    }


// checking if array 2 have some remaining elements

    while (j < size2)
    {
        if (uni.size() == 0 || uni.back() != arr2[j])
        {
            uni.push_back(arr2[j]);
        }
        j++;
    }

for (auto i: uni)
{
    cout<<i<<" ";
}




    return 0;
}