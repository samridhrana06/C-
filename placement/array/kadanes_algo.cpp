// input : {-2, -3, 4, -1, -2, 1, 5, -3}
//output : 7

#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
int n = sizeof(arr)/sizeof(arr[0]);
int ans=0;
int max_so_far = arr[0];
int max_ending = arr[0];
for (int i = 0; i < n; i++)
{
max_ending = max(arr[i],max_ending+arr[i]);
max_so_far = max(max_so_far,max_ending);
}
cout<<max_so_far<<endl;



    return 0;
}

