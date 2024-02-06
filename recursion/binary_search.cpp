#include<bits/stdc++.h>
using namespace std;

bool Bsearch(vector<int>& v, int low, int high, int target){
    if (low > high) {
        return false;
    }

    int mid = low + (high - low) / 2;

    if(v[mid] == target){
        return true;
    }
    else if(v[mid] < target){
        return Bsearch(v, mid + 1, high, target);
    }
    else {
        return Bsearch(v, low, mid - 1, target);
    }
}

int main(){
    vector<int>v;
    cout<<"Enter the length: ";
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the value "<<i+1<<": ";
        int value;
        cin>>value;
        v.push_back(value);
    }

    sort(v.begin(), v.end()); // Binary search requires sorted array

    cout<<"Enter the target: ";
    int target ;
    cin>>target;
    
    bool ans = Bsearch(v, 0, n-1, target);

    if(ans == true){
        cout<<"It is present";
    }
    else{
        cout<<"Not Present";
    }

    return 0;
}