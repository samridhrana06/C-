
#include<bits/stdc++.h>
using namespace std;

int main(){

string s = "abbaca";

int n = s.length();

stack<char>st;
int i;
while ( i < n)
{
    if(st.empty() || st.top() != s[i]){
        st.push(s[i]);
    }
    else{
        st.pop();
    }
    i++;
}

//storing inside string 
string stri="";
while (!st.empty())
{
    char ch = st.top();
    st.pop();

    stri += ch;
}

reverse(stri.begin(),stri.end());

cout<<stri;

return 0;
}