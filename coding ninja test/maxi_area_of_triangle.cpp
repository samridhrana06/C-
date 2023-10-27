#include<bits/stdc++.h>
using namespace std;

double calculateArea(int n, vector<vector<int>> &points){

// explain with comments
double maxarea =INT_MIN;
    double area = 0;
    for(int i=0;i<n;i++){
        area += (points[i][0]*points[(i+1)%n][1]) - (points[i][1]*points[(i+1)%n][0]);
        maxarea = max(maxarea,area);
    }
    return maxarea/2.0;

}

int main(){

    int n =5;
    vector<vector<int>> points = {{0,0},{2,1},{0,4},{0,2},{5,0}};
    cout<<calculateArea(n,points)<<endl;
    return 0;
}