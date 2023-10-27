/*
                        1
                      1   1
                    1  2  1
                  1  3   3  1
*/

#include<bits/stdc++.h>
using namespace std;

int ncr(int n,int r){
    int res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res*(n-i);
        res = res / (i+1);
    }
    return res;
}
    
int main(){
    int n = 4;
    vector<vector<int>> ans; // changed to vector of vectors
    for (int r = 1; r <= n; r++) // changed to include n
    {
        vector<int> temp;
        for (int c = 1; c <= r; c++)
        {
            temp.push_back(ncr(r-1,c-1));
        }
        ans.push_back(move(temp)); // push temp vector into ans vector
    }

    //printing the output
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}