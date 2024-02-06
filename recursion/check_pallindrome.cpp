#include<bits/stdc++.h>
using namespace std;

bool checkpallondrome(string str,int i, int j){
if(i>j){
    return true ;
}

if(str[i] != str[j]){
    return false;
}
else{
    return checkpallondrome(str,i+1,j-1);
}
}


int main(){
string name = "aabbccbbaa";
cout<<endl;
bool ispallindrome = checkpallondrome(name,0,name.length()-1);

if(ispallindrome)
{
    cout<<"Its pallindrome";
}
else{
    cout<<"Not pallindrome";
}
    return 0;
}