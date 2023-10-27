#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low, int mid,int high){

    vector<int> ans;

    int left = low;
    int right = mid+1;


    while (left <= mid && right<= high)
    {
        if(arr[left]<= arr[right]){
            ans.push_back(arr[left]);
            left++;
        }
        else{
            ans.push_back(arr[right]);
            right++;
        }
    }

    while (left<=mid)
    {
        ans.push_back(arr[left]);
        left++;
    }
    
    while (right<=high)
    {
        ans.push_back(arr[right]);
        right++;
    }
    
    for (int i = low; i <= high; i++)
    {
        arr[i] = ans[i-low];
    }
    
    
}



void mergesort_(vector<int>&arr , int low, int high){        //for dividing
if(low >= high) return;

int mid = (low+high) / 2;
mergesort_(arr,low,mid);
mergesort_(arr,mid+1,high);
merge(arr,low,mid,high);

}


int main(){

vector<int>arr = {3,2,4,1,3};
int n =5;

mergesort_(arr,0,n-1);

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}


