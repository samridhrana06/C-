#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {3,5,0,0,4};
int n = 5;

//----------------------------Brute force -----------------------------------



// checking the number weather its zero or not

int temp[n] = {0};
 int j =0;
for (int i = 0; i < n; i++)
{
    if(arr[i] != 0){
       
        temp[j] = arr[i];  //---------> storing it into temp array
        j++;
    }
}

for (int i = 0; i < n; i++)
{
    cout<<temp[i];
}





    return 0;
}