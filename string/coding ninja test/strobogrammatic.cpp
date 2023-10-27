#include<bits/stdc++.h>
using namespace std;

bool check(string num){

    unordered_map<char,char>m;

    m['0'] = '0';
    m['1'] = '1';
    m['6'] = '9';
    m['8'] = '8';
    m['9'] = '6';

    int start =0;
    int end = num.size()-1;
    while (start <=end)
    {
        if(m.find(num[start]) == m.end() || m[num[start]] != num[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
    
}

int main(){
    string num = "693";
    if(check(num)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}