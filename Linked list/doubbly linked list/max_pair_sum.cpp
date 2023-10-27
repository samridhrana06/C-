// You are given a 0-indexed integer array nums. You have to find the maximum sum of a pair of numbers from nums such that the maximum digit in both numbers are equal.

// Return the maximum sum or -1 if no such pair exists.

// Input: nums = [51,71,17,24,42]
// Output: 88
// Explanation: 
// For i = 1 and j = 2, nums[i] and nums[j] have equal maximum digits with a pair sum of 71 + 17 = 88. 
// For i = 3 and j = 4, nums[i] and nums[j] have equal maximum digits with a pair sum of 24 + 42 = 66.
// It can be shown that there are no other pairs with equal maximum digits, so the answer is 88.

// Input: nums = [1,2,3,4]
// Output: -1
// Explanation: No pair exists in nums with equal maximum digits.

#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int>& nums) {
    int n = nums.size();
    int maxSum = -1;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++) {
        int maxDigit = 0;
        int temp = nums[i];
        while(temp) {
            maxDigit = max(maxDigit, temp%10);
            temp /= 10;
        }
        if(mp.find(maxDigit) != mp.end()) {
            maxSum = max(maxSum, mp[maxDigit] + nums[i]);
            mp[maxDigit] = max(mp[maxDigit], nums[i]);
        }
        else {
            mp[maxDigit] = nums[i];
        }
    }
    return maxSum;
}