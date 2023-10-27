#include<bits/stdc++.h>
using namespace std;

int main(){

// vector<int>v;
// v.push_back(1);
// v.emplace_back(2);

// vector<pair<int,int>> vec;

// vec.push_back({3,4});

// cout<<vec[0].second;


// int arr[] = {20,10,15,6,7};
// vector<int>v;
// v.push_back(20);
// v.push_back(10);
// v.push_back(15);
// v.push_back(6);
// v.push_back(7);

// vector<int>::iterator it= v.begin();
// cout<<" first: "<<*(it)<<endl;

// //increase it
// it++;
// cout<<"Second: "<<*(it)<<endl;

// it = it+2;

// cout<<"Third: "<<*(it)<<endl;


// // cout<<"End: "<<*(it--);

// vector<int>::iterator end_=v.end();
// end_--;
// cout<<*(end_);


//Printinyg the whole vector



           // method 1
// for (vector<int>::iterator it= v.begin(); it != v.end();it++){
//     cout<<*(it)<<" ";
// }

            //method 2

// for (auto it = v.begin();it != v.end();it++)
// {
//     cout<<*(it)<<" ";
// }


            // method 3

// for (auto it: v)
// {
//     cout<<it<<" ";
// }


// insertion in a vector

vector<int> v(2,100);
v.insert(v.begin(),300);
v.insert(v.begin()+1,2,10);

// vector<int> k = {1,3,4,66,7,8};

// for (int i = 0; i < v.size(); i++)
// {
//     cout<<v.at(i)<<" ";
// }

for(auto it: v){
    cout<<it<<" ";
}


    return 0;

}