#include<bits/stdc++.h>
using namespace std;

int main(){

int weight[] = {1,2,3,4,5,6,7,8,9,10};
int n = sizeof(weight)/sizeof(int);
int days = 5;

int minimumCapacity = INT_MIN;
for (int i = 0; i < n; i++)
{
    minimumCapacity = max(minimumCapacity,weight[i]);
}
int maximumCapacity = 0;
for (int i = 0; i < n; i++)
{
    maximumCapacity += weight[i];
}
int ans = 0;
int sum = 0;
for (int i = 1; i <= days; i++)
{
    for (int j = 0; j <n ; j++)
    {
        if (sum + weight[j] <= maximumCapacity)
        {
            sum += weight[i];
            ans = max (ans,j);
        }
        else{
            break;
        }
        
    }
    
}
cout<<ans;
    return 0;
}