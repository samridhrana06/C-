#include <bits/stdc++.h> 
using namespace std;


int f(int n, vector<int>&heights){


    if(n==0) {
         return 0;
    }

    int left = f(n-1,heights) + abs(heights[n]-heights[n-1]);
    int right = INT_MAX;
    if(n>1){
        right = f(n-1,heights) + abs(heights[n]-heights[n-2]);
    }

    return min(left,right);
}

int frogJump(int n, vector<int> &heights)
{
    // Write your code here.

    return f(n-1,heights);


}
int main() {
    vector<int> heights = {10, 20, 30, 10}; // Your hardcoded input
    int n = heights.size();
    cout << frogJump(n, heights) << endl;
    return 0;
}