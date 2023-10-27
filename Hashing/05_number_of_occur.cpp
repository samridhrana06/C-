
#include<bits/stdc++.h>
using namespace std;

void freq(vector<int> arr,int n)
{
map<int,int>mpp;
for (int i = 0; i < n; i++)
{
    mpp[arr[i]]++;
}
for(auto it : mpp){
    cout<<it.first<<"->"<<it.second<<endl;
}
vector<int>vec;
for (int i = 0; i <= n; i++)
{
    if(mpp[i] == i){
        vec.push_back(mpp[i]);
    }
    else{
        vec.push_back(0);
    }
}
for(auto it : vec){
    cout<<it<<endl;
}
return ;



}

int main(){

vector<int> arr = {2, 3, 2, 3, 5};

int p = 5;
int n = 5;
freq(arr,n);

    return 0;
}

    void frequencyCount(vector<int>& arr,int n, int P)
    { 
        // code here
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[i]+=1;
        }
      vector<int>vec;
for (int i = 1; i <=n; i++)
{
    if(mpp.find(i){
        vec.push_back(mpp[i]);
    }
    else{
        vec.push_back(0);
    }
}

arr = vec;
    }
};
