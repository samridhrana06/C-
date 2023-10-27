
// 16
// 19 23 25 18 21 19 5 3 26 22 18 6 19 18 4 30 


#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

bool ls(int arr[],int x,int n){

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x){
            return true;
        }
    }
    return false;
    
}
int main(){

    int n =4;
    
    int arr[] ={1,2,2,1};

    sort(arr , arr+n);
int count =0;
int maxi = INT_MIN;
for(int i= 0;i<n;i++){
    
    int x = arr[i];
    
    while (ls(arr,x,n)== true)
    {
        x++;
        count++;
    }

    maxi = max(count,maxi); 
    count = 0;
}

cout<<maxi;

    return 0;
}