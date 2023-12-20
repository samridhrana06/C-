#include<bits/stdc++.h>
using namespace std;

// int findKthLargest(vector<int>&nums, int k){
//     priority_queue<int>pq(nums.begin(),nums.end());
//     int ans = 0;

//     while(k--){
//         ans = pq.top();
//         pq.pop();
//     }

//     return ans;
 
    
// }

int findKthLargest(vector<int>&nums, int k){
    priority_queue<int,vector<int>,greater<int>>pq;

    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
        if(pq.size() > k){
            pq.pop();
        }
    }
    

    return pq.top();
}


int main(){
vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    int result = findKthLargest(nums, k);
    cout << "The " << k << "th largest element is: " << result << endl;
    return 0;

    // return 0;
}