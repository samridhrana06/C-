#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string S){
    // Write your code here.
    stack<char>st;
    for(int i=0;i<S.length();i++){
        if(st.empty()){
            st.push(S[i]);
        }

        else if(S[i] == ')' and st.top() == '('){
            st.pop();
        }
        else if(S[i] == ']' and st.top() == '['){
            st.pop();
        }
        else if(S[i] == '}' and st.top() == '{'){
            st.pop();
        }
        else{
            st.push(S[i]);
        }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    // Create a string of parentheses
    string parentheses = "{[()]}";

    // Call the isBalanced function
    bool isBalancedParentheses = isBalanced(parentheses);

    // Print the result
    if (isBalancedParentheses) {
        cout << "The parentheses are balanced." << endl;
    } else {
        cout << "The parentheses are not balanced." << endl;
    }

    return 0;
}