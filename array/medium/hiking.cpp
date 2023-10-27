// Imagine you are a hiker exploring a mountain trail. As you hike, you keep track of the elevation levels at different points along the trail, Your task is to fim the longest uphill segment of the hike. A segment is considered uphill if each point's elevation is higher than the previous point.

// Write a function that takes an array of elevation levels as input and returns the length of the longest uphill segment.

// Input Format:

// The first line contains a array of integers (array of elevation levels).

// Output Format:

// The first line contains a integer n (length of the longest uphill segment).

// 1 Input: [100, 128, 140, 138, 135, 145, 168, 180]

// 2 | Output: S

// Explanation:

// One of the uphill is [100, 120, 140] which is of length 3 because 140-120-100. Another uphill is [130, 135, 145, 160, 180] which of length 5. And it's longest uphill present. Hence length of the longest uphill segment is 5.


#include<bits/stdc++.h>
using namespace std;

int findlongestuphillsegment(int arr[], int len){
    int count = 1;
    int maxcount = 0;
    for(int i=0; i<len-1; i++){
        if(arr[i+1]>arr[i]){
            count++;
        }
        else{
            maxcount = max(maxcount, count);
            count = 1;
        }
    }
    return maxcount;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    cout<<findlongestuphillsegment(arr, n)<<endl;
    return 0;
}



