// Given a string that represents a roman number. Convert
// the roman number to an integer and return it.
// Roman numerals are represented by seven different
// // symbols: l, V, X, L, C, D, and M.
// input: 
// XC
//output:
// 90

//with comments
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     if(s[i]=='I'){
    //         if(s[i+1]=='V'){
    //             ans+=4;
    //             i++;
    //         }
    //         else if(s[i+1]=='X'){
    //             ans+=9;
    //             i++;
    //         }
    //         else{
    //             ans+=1;
    //         }
    //     }
    //     else if(s[i]=='X'){
    //         if(s[i+1]=='L'){
    //             ans+=40;
    //             i++;
    //         }
    //         else if(s[i+1]=='C'){
    //             ans+=90;
    //             i++;
    //         }
    //         else{
    //             ans+=10;
    //         }
    //     }
    //     else if(s[i]=='C'){
    //         if(s[i+1]=='D'){
    //             ans+=400;
    //             i++;
    //         }
    //         else if(s[i+1]=='M'){
    //             ans+=900;
    //             i++;
    //         }
    //         else{
    //             ans+=100;
    //         }
    //     }
    //     else if(s[i]=='V'){
    //         ans+=5;
    //     }
    //     else if(s[i]=='L'){
    //         ans+=50;
    //     }
    //     else if(s[i]=='D'){
    //         ans+=500;
    //     }
    //     else if(s[i]=='M'){
    //         ans+=1000;
    //     }
    // }
    // cout<<ans<<endl;

    // using map
// Create a map that maps each Roman numeral to its corresponding integer value
map<char,int> m;
m['I']=1;
m['V']=5;
m['X']=10;
m['L']=50;
m['C']=100;
m['D']=500;
m['M']=1000;

int ans=0;
for(int i=0;i<n;i++){
    // If the value of the current Roman numeral is less than the value of the next Roman numeral,
    // subtract the value of the current Roman numeral from the total sum
    if(m[s[i]]<m[s[i+1]]){
        ans-=m[s[i]];
    }
    // Otherwise, add the value of the current Roman numeral to the total sum
    else{
        ans+=m[s[i]];
    }
}

// Print the total sum of the Roman numerals as an integer
cout<<ans<<endl;

    return 0;
}