#include<bits/stdc++.h>
using namespace std;

int main(){

list<int>ls;

ls.push_back(2);
ls.push_front(5);
ls.push_back(6);

for (auto it: ls)
{
    cout<<it<<" ";
}


    return 0;
}