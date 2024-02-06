#include<bits/stdc++.h>
using namespace std;

int Sums(vector<int>&v,int n){

if(n==0){
    return 0;
}

return Sums(v,n-1)+v[n-1]; // array index starts from 0, so it should be n-1
}

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
    
    int ans = Sums(v,n);
    cout<<"Answer is: "<<ans;

    return 0;
}