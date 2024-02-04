#include <bits/stdc++.h> 
using namespace std;

int maximumNonAdjacentSum(vector<int> &nums){
    int maxVal = nums[0], maxIndex;
    int n = nums.size();
    int secondMax = nums[0];
    
    for(int i = 0; i < n; i++){
        if(maxVal < nums[i]){
            maxVal = nums[i];
            maxIndex = i;
        }
    }
    // Maximum value is in maxVal and index is in maxIndex

    // Now to find second max
    for(int i = 0; i < n; i++){
       if((i != maxIndex ) and (i != maxIndex-1 ) and (i != maxIndex+1)
       and (nums[i] != maxVal)){

           secondMax = nums[i];
       }
    }

    return maxVal + secondMax;
}

int main() {
    // Hardcoded input
    int n = 5;
    vector<int> heights = {1,2,4};

    // Call the frogJump function and print the result
    int result = maximumNonAdjacentSum(heights);
    cout << "The result is: " << result << endl;

    return 0;
}