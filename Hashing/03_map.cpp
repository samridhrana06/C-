#include<bits/stdc++.h>
using namespace std;

int main(){

int n=5;
// cin>>n;

int arr[] = {2, 3, 2, 3, 5};
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];
// }

//computing

map<int,int> mpp;
for (int i = 0; i < n; i++)
{
    mpp[arr[i]]++;
}



int p=5;
for (int i = 0; i < p; i++)
{
    cout<<mpp[i]<<endl;
}




// for(auto it : mpp){
//     cout<<it.first<< "->"<<it.second<<endl;
// }




//querry 

// int q;
// cin>>q;

// while (q--)
// {
//     int number;
//     cin>>number;

//     //fetch that value from hash 
//     cout<<mpp[number]<<endl;
// }





    return 0;
}