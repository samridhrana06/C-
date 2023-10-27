#include<bits/stdc++.h>
using namespace std;

int main(){

    // Initialize the string s
    string s = "Aad";
    // Get the length of the string s
    int n = s.length();

    // Iterate over each character in the string s
    for(int i=0;i<n;i++){

        if(s[i] == 'z'){
			s[i] = 'a';
		}
		if(s[i] == 'A'){
			s[i] = 'Z';
		}

        // If the character is an uppercase letter, convert it to lowercase
        if(s[i]>='A' && s[i]<='Z'){
            s[i] = s[i] -1;
        }
        // If the character is a lowercase letter, convert it to uppercase
        else{
            s[i] = s[i]+1 ;
        }
    }

    // Print the modified string s
    cout<<s<<endl;

    // Exit the program
    return 0;
}