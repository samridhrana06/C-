//innput : "hello i am samridh";
//output : "samridh am i hello";


// i will be using stack to reverse the string
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// // Define the input string
// string s = "hello i am samridh";

// // Create a stack to store the words
// stack<string> st;

// // Create a temporary string to store each word
// string temp = "";

// // Loop through each character in the input string
// for(int i=0;i<s.length();i++){
//     // If the current character is a space, push the temporary string onto the stack
//     if(s[i] == ' '){
//         st.push(temp);
//         temp = "";
//     }
//     // Otherwise, add the current character to the temporary string
//     else{
//         temp += s[i];
//     }
// }

// // Push the last word onto the stack
// st.push(temp);

// // Pop each word off the stack and print it
// while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
// }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// string s = "hello i am samridh";
// int n = s.length();

// int i = 0;
// string temp = "";

// while(i<n){

// string ans ="";
//     while(s[i] == ' ' && i<n){
//         i++;
// }
// while (s[i] != ' ' && i<n){
//     ans +=  s[i];
//     i++;
// }
// if(ans.size() > 0){
//     if(temp.size() == 0){
//         temp = ans;
//     }
//     else{
//         temp = ans + " " + temp;
//     }
// }
// }
// cout<<temp<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){

    int i = 0;
    string temp = "";
    stack<string> st;
    string ans = "";

    // Loop through each character in str
    while(str[i] != '\0'){

        // If the current character is not a space, add it to temp
        if(str[i] != ' '){
            temp += str[i];
        }

        // If the current character is a space and temp is not empty, push temp onto the stack st and reset temp to an empty string
        if(str[i] == ' ' && !temp.empty()){
            st.push(temp);
            temp = "";
        }

        // Move to the next character in str
        i++;
    }

    // If temp is not empty after the loop, push it onto the stack st
    if(!temp.empty()){
        st.push(temp);
    }   

    // Loop through the stack st and pop the top element off the stack, concatenate it with a space, and add it to ans
    while(!st.empty()){
        ans += st.top() + ' ';
        st.pop();
    }

    // Return ans
    return ans;
}