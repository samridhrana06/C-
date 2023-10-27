// input = [2,4,5,7], k = 3
// output = 6;

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {2, 4, 5, 7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < n; i++)
  {
    if(arr[i] <= k){
        k++;
    }
    else{
        break;
    }
  }
  cout << k << endl;
    return 0;
}
