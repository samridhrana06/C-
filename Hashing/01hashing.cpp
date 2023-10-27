#include<bits/stdc++.h>
using namespace std;

int main(){

int s;
int arr[] = {1,3,2,1,3};
s = sizeof(arr)/sizeof(arr[0]);


// for (int i = 0;i < s; i++)
// {
//     cin>>arr[i];
// }

 // creating hash array to store in it 



int hash[s]={0};
for (int i = 0; i < s; i++)
{
    hash[arr[i]] += 1;
}



int arr1[] = {1,4,2,3};
int sizearr1= sizeof(arr1)/sizeof(arr1[0]);

while (sizearr1--)
{

    cout<<hash[arr1[sizearr1]]<<endl;           //  1,3,2,1,3
}



    return 0;
}
