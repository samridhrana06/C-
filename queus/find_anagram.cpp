// You have been given a string STR and a non-empty
// string P TR. Your task is to find all the starting indices of
// PTR's anagram in STR.
// An anagram of a string is another string which contains
// the same characters and is obtained by rearranging the
// characters.
// For example: 'SILENT' and 'LISTEN' are anagrams of
// each other. 'ABA' and 'ABB' are not anagram because
// we can't convert 'ABA' to 'ABB' by rearranging the
// characters of particular strings.

//input: CBAEBABACD
//       ABC
//output: 0 6

// input: ABADE
// BA
// output: 0 1

//input: BACDGABCDA
//      ABCD
//output: 0 5 6

// steps to solve this problem:
// 1. create a map of pattern string.
// 2. create a map of string str.
// 3. create a window of size of pattern string.
// 4. check if the map of pattern string and map of window string are equal.
// 5. if equal then push the index of window string in vector.
// 6. slide the window by one character and check again.
// 7. if not equal then remove the first character of window string from map.
// 8. add the next character of window string in map.
// 9. repeat the process until the end of string.

// code woth comments to expalin 
#include<bits/stdc++.h>
using namespace std;

vector<int> findAnagram(string str, string ptr){
    vector<int>ans;
    int n = str.size();
    int k = ptr.size();
    if(n<k){ // if length of str is less than length of ptr, return empty vector
        return ans; 
    }
    map<char, int>mp; // create a map to store frequency of characters in ptr
    map<char, int>mp1; // create a map to store frequency of characters in first k characters of str
    for(int i=0;i<k;i++){ // update frequency of characters in both maps
        mp[ptr[i]]++;
        mp1[str[i]]++;
    }
    if(mp==mp1){ // if the two maps are equal, then the starting index of the first anagram is 0
        ans.push_back(0);
    }
    for(int i=k;i<n;i++){ // loop through the rest of the characters in str
        mp1[str[i]]++; // add the frequency of the current character
        mp1[str[i-k]]--; // remove the frequency of the character that is no longer in the window
        if(mp1[str[i-k]]==0){ // if the frequency of the removed character is 0, remove it from the map
            mp1.erase(str[i-k]);
        }
        if(mp==mp1){ // if the two maps are equal, then the starting index of the anagram is i-k+1
            ans.push_back(i-k+1);
        }
    }
    return ans; // return the vector of starting indices of anagrams
}

int main(){
    string str, ptr;
    cin>>str>>ptr; // take input from user
    vector<int>ans = findAnagram(str, ptr); // call the function to find anagrams
    for(int i=0;i<ans.size();i++){ // print the starting indices of anagrams
        cout<<ans[i]<<" ";
    }
    return 0;
}
