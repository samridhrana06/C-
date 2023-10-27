#include<bits/stdc++.h>
using namespace std;

int main(){

stack<int>st;
st.push(1); //{1}
st.push(2); //{2,1}
st.push(3); //{3,2,1}
st.push(4); //{4,3,2,1}
st.push(5); //{5,4,3,2,1}

// cout<<st.top(); this will give 5 because it is in the top

// st.pop(); //this will remove 5 from the top
// cout<<st.top();  this will print 4

cout<<st.size();

stack<int>st2;
st.swap(st2);

 
    return 0;
}