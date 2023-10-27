#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[] = {1, 2, 7, -4, 3, 2, -10, 9, 1};
int n = 9;
int sum =0;

for (int i = 0; i < n; i++)
{
    sum += arr[i];


    if(sum < 0){
        sum =0;
    }

}

cout<<sum;

return 0;
}