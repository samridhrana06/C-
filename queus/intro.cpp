
#include<bits/stdc++.h>
#include<queue>
using namespace std;

void show1(queue<char>q)
{

    // queue<char>q = QUEUE;

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    cout<<endl;
}

int main(){

// queue<string>q;

// q.push(10);
// q.push(11);
// q.push(-3);
// q.push(2);

// show(q);

// cout<<"Size is: "<<q.size()<<endl;
// cout<<"Front is: "<<q.front()<<endl;
// cout<<"Back is: "<<q.back()<<endl;


queue<char>q;

q.push('a');
q.push('b');
q.push('c');
q.push('d');
q.push('e');


show1(q);

cout<<"Size is: "<<q.size()<<endl;
cout<<"Front is: "<<q.front()<<endl;
cout<<"Back is: "<<q.back()<<endl;

return 0;
}