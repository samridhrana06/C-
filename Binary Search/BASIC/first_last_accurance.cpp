// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int arr[] = {2, 4, 6, 8, 8, 8, 11, 13};
//     int t = 8;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int first = -1;
//     int last = -1;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == t)
//         {
//             first = i;
//             break;
//         }
//     }

//     for (int i = n - 1; i >= 0; i--)
//     { // for(int i=n-1;i>=0;i--)
//         if (arr[i] == t)
//         {
//             last = i;
//             break;
//         }

//     }
//         cout << first << " " << last << endl;
//         return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main(){

//     int arr[] = {2, 4, 6, 8, 8, 8, 11, 13};
//     int t = 8;
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int first = -1;
//     int last = -1;
//     for (int  i = 0; i < n; i++)
//     {
//         /* code */
//         if (arr[i]==t)
//         {
//             /* code */
//             if(first == -1){
//                 first = i;
//             }

//             last = i;
//         }
//     }

//     cout<<first<<" "<<last<<endl;

// }

// #include <bits/stdc++.h>
// using namespace std;

// int findlower(vector<int>&arr , int n, int x){
//     int low = 0;
//     int high = n-1;
//     int ans = -1;
//     while(low<=high){

//         int mid = (low+high)/2;
//         if(arr[mid] >= x){
//             ans = mid;
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//     }
//     return ans;
// }

// int findupper(vector<int>&arr , int n , int x){

//     int low = 0;
//     int high = n-1;
//     int ans = -1;
//     while (low <= high){

//         int mid = (low+high)/2;
//         if(arr[mid] > x){
//             ans = mid;
//             high = mid-1;
//         }
//         else{
//             low = mid+1;
//         }
//     }
//     return ans-1;
// }

// pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x){

//     int lb = findlower(arr,n,x);
//     int ub = findupper(arr,n,x);
//     if((lb == n) || (arr[lb] != x)) return {-1,-1};

//     else{
//         return {lb,ub};
//     }

// }

// ---------------------first and last using simple banary search -------------------------

#include <bits/stdc++.h>
using namespace std;

int firstoccur(vector<int> arr, int n, int x)
{
    int ans = -1;
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int lastoccur(vector<int> arr, int n, int x)
{
    int ans = -1;
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            low = mid + 1;
            ans = mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{

    vector<int> arr = {2,8, 8, 8, 8, 8, 11, 13};
    int n = arr.size();
    int x = 8;
    int first = firstoccur(arr, n, x);
    int last = lastoccur(arr, n, x);
   
    cout << first << endl;
    cout << last << endl;
    

    return 0;
}