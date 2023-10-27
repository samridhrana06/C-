// You are given a string 'S'. Your task is to check
// whether the string is palindrome or not. For
// checking palindrome, consider alphabets and
// numbers only and ignore the symbols and
// whitespaces.

// Let S = "c 1 0$d@eeD olc".
// If we ignore the special characters,
// whitespaces and convert all uppercase
// letters to lowercase, we get S =
// "clodeedolc", which is a palindrome.
// Hence, the given string is also a
// palindrome .


#include<bits/stdc++.h>
using namespace std;

int main(){

string s= "c l o$d@eeD olc";

stack<char>st;

// convert to lower case 

for(auto &i : s){
    i = tolower(i);
}



int size = s.length();

for(int i =0;i<size;i++){
    if(s[i] >='a' and s[i] <='z'){
        st.push(s[i]);
    }
}

int stacksize = st.size();
vector<char>newvalue;
while (!st.empty())
{
    char temp = st.top();
    newvalue.push_back(temp);
    st.pop();
}

// for (int i = 0; i < newvalue.size(); i++)
// {
//     cout<<newvalue[i];
// }
vector<char>reversedvalue(newvalue.rbegin(),newvalue.rend());

if(newvalue == reversedvalue){
    cout<< "Pallindrome";
}
else{
    cout<<"Not Pallindrome";
}

    return 0;
}