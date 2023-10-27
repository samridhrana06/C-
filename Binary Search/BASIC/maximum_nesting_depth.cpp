// Input: s: ( 1+(2*3)/((4-5) + (6-7)) )
// N 13
// Output: 2
// Explanation: The digits 9 and 3 are inside of 2
// nested parentheses. Hence we return 2.


#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "( 1+(2*3)/((4-5) + (6-7)) )";
    int size = s.size();
    int brackets =0;
    int max_brackets =0;

    for(int i = 0; i<size;i++){
        if(s[i]== '('){
            brackets++;
        }
        if(s[i] == ')'){
            brackets--;
        }
        max_brackets = max(max_brackets,brackets);
    }
    
    cout<<"Answer is "<<max_brackets<<endl;
    return 0;
}