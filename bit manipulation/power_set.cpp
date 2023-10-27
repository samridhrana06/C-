#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {3,2,1};
int n= sizeof(arr)/sizeof(arr[0]);
vector<int>ans;

for (int i = 0; i < (1<<n)-1; i++)
{
    for (int bit = 0; bit < n; bit++)
    {
        if(i&(1<<bit)){
            ans.push_back(arr[bit]);
        }
    }
    
}

for (auto it:ans)
{
    cout<<it<<" ";
}


    return 0;
}