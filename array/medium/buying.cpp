// You are given an array/list prices where the elements of the array represent the prices of the stock as they were yesterday and indices of the array represent minutes. Your task is to find and return the maximum profit you can make by buying and selling the stock. You can buy and sell the stock only

// once

// Note: You can't sell without buying first.

// Return 'No prices found if there are no array elements.

// Example

// For the given array [2, 100, 150, 120],

// The maximum profit can be achieved by buying the stock at minute 0 when its price is Rs. 2 and selling it at minute 2 when its price is Rs. 150

// So, the output will be 148.

// Input Format

// The first line of the input contains a single integer 'N representing the size of the array. The second line of input contains 'N' space-separated integers representing the elements of the given array.

// Output Format

// For each input print a single integer representing the maximum profit you can achieve. If the maximum profit is negative, print Q


// Sample Input

// 4

// 1234

// Sample Output

// 3

// Explanation

// For the first test case, it's optimal to buy the stock at minute 0 and sell it at minute 3 to get a maximum profit of For the second test case, the maximum profit will be 0 for all possible ways of buying and selling stock.


#include <bits/stdc++.h>
using namespace std;

void maxiprofit(int prices[], int n){
    // if n is 0 then
    if(n==0){
        cout<<"No prices found"<<endl;
        return;
    }
    int maxprofit = 0;
    int minprice = INT_MAX;
    for(int i=0; i<n; i++){
        minprice = min(minprice, prices[i]);
        maxprofit = max(maxprofit, prices[i]-minprice);
    }
    cout<<maxprofit<<endl;
}

int main(){
    int n;
    cin>>n;
    int pices[n];
    for(int i=0; i<n; i++){
        cin>>pices[i];
    }
    maxiprofit(pices, n);
    return 0;
}