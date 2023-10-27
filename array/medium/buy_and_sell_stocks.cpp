#include<bits/stdc++.h>
using namespace std;

int main(){

int n =9;
int arr[] = {7, 7, 9, 8, 6, 7, 6, 10, 5 };

int mini = arr[0];
int maxi = 0;
int profit=0; 

for (int i = 0; i < n; i++)
{
    int cost = (arr[i] - mini);
    profit = max(profit,cost);
    mini = min(arr[i],mini);

}

cout<<profit;



    return 0;
}