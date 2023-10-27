#include<bits/stdc++.h>
using namespace std;

int main(){

int n =6;
int arr[] = {1,1,2,2,2,3};



// storing element in map
map<int,int> mp;
for (int i = 0; i < n; i++)
{
    mp[arr[i]]+=1;

}

for (auto i: mp)
{
    cout<<i.first<<"--->"<<i.second<<endl;
}



    return 0;
}