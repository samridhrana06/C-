// example 
// string array = a,b,c,d
// k = 1
// output 
// d,a,b,c
//k = 2
// output
// c,d,a,b
//k = 3
// output
// b,c,d,a
//k = 4
// output
// a,b,c,d

#include<bits/stdc++.h>
using namespace std;

int main(){

vector<string>array = {"a","b","c","d"};
int k = 2;
int size = array.size();
vector<string>newarray;
for(int i = size-k;i<size;i++){
    newarray.push_back(array[i]);
}
for(int i = 0;i<size-k;i++){
    newarray.push_back(array[i]);
}
for(int i = 0;i<size;i++){
    cout<<newarray[i]<<" ";
}
    return 0;
}

