#include<bits/stdc++.h>
using namespace std;


void showpriorityQueue(priority_queue<int>pq){
    priority_queue<int>q = pq;

    while (!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}
int  main(){

    priority_queue<int>pq;

    pq.push(10);
    pq.push(-3);
    pq.push(7);
    pq.push(8);
    
    
    showpriorityQueue(pq);
    cout<<pq.size()<<endl;  
    cout<<pq.top()<<endl;



}