#include<bits/stdc++.h>
using namespace std;


void show(priority_queue<int>pq){
    priority_queue<int>p = pq;

    while (!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();
    }

    cout<<endl;
    
}
int main(){

priority_queue<int>p;

p.push(10);
p.push(11);
p.push(7);
p.push(-3);
p.push(8);

show(p);

    return 0;
}