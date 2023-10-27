#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>arr = {1,1,2,2,3,3,3,4};
int n = 8;
int k =2;

vector<int>vec;

map<int,int>mpp;
for(int i: arr){
    mpp[i]+=1;
}

for(auto it: mpp ){
    cout<<it.first<<"->"<<it.second<<endl;
}

    return 0;
}