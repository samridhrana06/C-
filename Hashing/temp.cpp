#include<bits/stdc++.h>
using namespace std;


int main(){

//taking the input
int n =5;
int arr[] = {2,3,2,3,5};
int hassh[n] = {0};




//putting in hash function 
for (int i = 0; i < n; i++)
{
    hassh[arr[i]]++;

}



//fetching the value

int q;
cout<<"enter the length: ";
cin>>q;

while (q--)
{
    int number;
    cout<<"Enter the number you want to check: ";
    cin>>number;


    cout<<hassh[number]<<endl;
}




    return 0;
}
