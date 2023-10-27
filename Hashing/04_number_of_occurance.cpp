// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// int n;
// cin>>n;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin>>arr[i];                
// }
// //  ----------------------------- using MAP ---------------
// unordered_map<int,int>mpp;
// for (int i = 0; i < n; i++)
// {
//     mpp[arr[i]]++;
// }

// for(auto it: mpp){
// cout<<it.first<<"->"<<it.second<<endl;
// }

//     return 0;
// }

// ----------------------------- Using hash ------------------------------------




#include <bits/stdc++.h>
using namespace std;

void hash_(int arr[],int n,int p){
     int hash[12] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]+=1;
    }

  for (int i = 1; i <=p; i++)
  {
    cout<<i<<"->"<<hash[i]<<endl;
  }

}
int main()
{

    int n=4;
    // cin >> n;
    int arr[] = {3,3,3,3};

    // operation of hashing
    int p=3;

  hash_(arr,n,p);
  

    return 0;
}