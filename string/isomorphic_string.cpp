//input str1 = aab
//input str2 = xxy
//output = true

//input str1 = aab
// input str2 = xyz
// output = false

#include<bits/stdc++.h> // include all standard libraries
using namespace std;

bool isIsomorphic(string str1, string str2) // function definition
{
    if(str1.length() != str2.length()) // if the two strings have different lengths, they cannot be isomorphic
        return false;
    unordered_map<char, char> mp; // create an unordered map to store character mappings
    unordered_set<char> st; // create an unordered set to store already mapped characters
    for(int i=0; i<str1.length(); i++) // loop through the characters in the first string
    {
        if(mp.find(str1[i]) == mp.end()) // if the character is not already mapped
        {
            if(st.find(str2[i]) != st.end()) // if the character in the second string is already mapped to another character
                return false; // the strings are not isomorphic
            mp[str1[i]] = str2[i]; // map the character in the first string to the corresponding character in the second string
            st.insert(str2[i]); // add the mapped character to the set of already mapped characters
        }
        else // if the character is already mapped
        {
            if(mp[str1[i]] != str2[i]) // if the mapped character in the second string is different from the current character
                return false; // the strings are not isomorphic
        }
    }
    return true; // if the function has not returned false by this point, the strings are isomorphic
}

int main() // main function
{
    string str1, str2; // declare two strings
    cout<<"Enter the first string: "; // prompt
    cin>>str1; // input the first string
    cout<<"Enter the second string: "; // prompt
    cin>>str2; // input the second string
    if(isIsomorphic(str1, str2)) // if the strings are isomorphic
        cout<<"The strings are isomorphic"; // print that the strings are isomorphic
    else // if the strings are not isomorphic
        cout<<"The strings are not isomorphic"; // print that the strings are not isomorphic
    return 0; // return 0 to indicate successful termination
}