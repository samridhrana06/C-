// You are given a string 'S' of size 'N', consisting of only '#' and A good
// string is defined as a string of size 2, which is either equal to or
// Retum the total number of good substrings of string 'S'.
// A substring of string 'S' is defined as a string that can be obtained by
// deleting some (possibly zero) characters from the start and the end of
// input #**#
//output 2
//input ##**
//output 1
//input ***
//output 0
//input ##***##*###*##*#*
//output 9

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            continue;
        }
        else{
            if(s[i+1]=='#'){
                continue;
            }
            else{
                if(s[i+2]=='#'){
                    continue;
                }
                else{
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}