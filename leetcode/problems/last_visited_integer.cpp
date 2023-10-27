#include<bits/stdc++.h>
using namespace std;

int main(){


// Given a O-indexed array of strings words where words[i] is either a positive integer represented as a string or the string "prev" .
// Start iterating from the beginning of the array; for every "prev" string seen in words , find the last visited integer in words which is
// defined as follows:
// • Let k be the number of consecutive "prev" strings seen so far (containing the current string). Let nums be the O-indexed array of
// th index of nums reverse will be the
// integers seen so far and nums_reverse be the reverse of nums , then the integer at (k -
// 1)
// last visited integer for this "prev" .
// • If k is greater than the total visited integers, then the last visited integer will be -1
// Return an integer array containing the last visited integers.


    vector<string> words = {"1","2","prev","prev","prev"};
    //output should be {2,1,-1}
    vector<int> nums;
    vector<int> nums_reverse;
    vector<int> ans;

    for(int i=0;i<words.size();i++){
        if(words[i]=="prev"){
            if(nums_reverse.size()==0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(nums_reverse[0]);
            }
        }
        else{
            nums.push_back(stoi(words[i]));
            nums_reverse.insert(nums_reverse.begin(),stoi(words[i]));
            ans.push_back(stoi(words[i]));
        }
    }


    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }




    return 0;
}