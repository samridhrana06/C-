#include<bits/stdc++.h>
using namespace std;


bool f(int i, string s)
{
if(i>=s.size()/2) return true;

if(s[i] != s[s.size()-i-1]) return false;
return f(i+1,s);
}

 


int main(){

string s= "mad";
// int length = s.length();
cout<<f(0,s);
    return 0;
}


int isPalindrome(string s)
	{
	    // Your code goes here
	   
	    for(int i =0; i< s.size()/2;i++){
	    
	        if(s[i] != s[s.size()-i-1]) {
	        return 0;
	        }
	        
	    }
	    return 1;
	}