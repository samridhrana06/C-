#include<bits/stdc++.h>
using namespace std;

int main(){

// input
string s = "Toosmallworld";
// convert to lowercase
transform(s.begin(), s.end(), s.begin(), ::tolower);

// using set to store
set<char>st;
for (int i = 0; i < s.length(); i++)
{
    st.insert(s[i]);

}

// check if size of set is 26
if(st.size()==26){
    cout<<"pangram";
}
else{
    cout<<"not pangram";
}



return 0;
}
