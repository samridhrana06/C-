#include<bits/stdc++.h>
using namespace std;

bool Lsearch(vector<int>arr,int n,int target){
    if(n==0){
        return false;
    }

    if(target == arr[n]) return true;

    return Lsearch(arr,n-1,target);
}

#include <iostream>

int main(){

    vector<int>v;
    cout<<"Enter the length: ";
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the value "<<i+1<<": "; // i+1 for user-friendly numbering
        int value;
        cin>>value;
        v.push_back(value); // push 'value' into the vector, not 'n'
    }
    cout<<"Enter the target: ";
    int target ;
    cin>>target;
    
    bool ans = Lsearch(v,n,target);
    // cout<<"Answer is: "<<ans;

    if(ans == true){
        cout<<"It is present";
    }
    else{
        cout<<"Not Present";
    }

    return 0;
}