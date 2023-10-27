#include<bits/stdc++.h>
using namespace std;

int main(){

string s = "45rohit12";
int n = s.length();

int count =0;

for (int i = 0; i < n; i++)
{
    if(isdigit(s[i])){
        count++;
    }
    else{
        break;
    }
}

string storing = s.substr(0,count);
// cout<<count<<endl;
//convert the string into integer
int x = stoi(storing);
cout<<x<<endl;



    return 0;
}