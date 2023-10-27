#include<bits/stdc++.h>
using namespace std;

int main(){

priority_queue<int>pq;
pq.push(5);
pq.push(2);
pq.push(8);
pq.push(10);

// cout<<pq.top();

pq.pop();
cout<<pq.top();
    return 0;
}