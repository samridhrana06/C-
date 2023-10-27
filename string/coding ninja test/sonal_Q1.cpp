// INPUT: aaabbccdddaee
// OUTPUT: a3b2c2d3e2
// of there is single element then we will not consider it 


#include<bits/stdc++.h>
using namespace std;

string compressString(string str){
    int n = str.size();
    string ans = "";
    int count = 1;
    for(int i=0;i<n;i++){
        if(str[i] == str[i+1]){
            count++;
        }
        else{
            if(count > 1){
                ans += str[i] + to_string(count);
                count = 1;
            }
            else{
                ans += str[i];
            }
        }
    }
    return ans;
}

int main(){
    string str = "aaabbccddda";
    // cin>>str;
    cout<<compressString(str)<<endl;
    return 0;
}
