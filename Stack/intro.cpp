#include<bits/stdc++.h>
using namespace std;


void printelement(stack<int>s){
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();  
    }
    
}
int main(){

stack <int>s;

s.push(5);
s.push(10);
s.push(20);
s.push(-3);

// s.pop(); // output 20;

// s.top(); // 10

// cout<<s.empty()<<endl;

// cout<<s.size()<<endl;

printelement(s);


    return 0;
}