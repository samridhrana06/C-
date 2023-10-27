//fibonacci specific range from n and m both including n and m 


#include <bits/stdc++.h>
using namespace std;

int main(){

    int n=3,m=6;
    int a=0,b=1,c=0;
    vector<int> v;
    for(int i=0;i<=m;i++){
        if(i>=n){
            // cout<<c<<" ";
            v.push_back(c);
        }
        a=b;
        b=c;
        c=a+b;
    }

    //sum of vecctor elements
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
    

    


    return 0;
}