#include <bits/stdc++.h> 
#include <vector>
#include <iostream>
int lSusbsequence(std::vector<int> arr, int n){
    char op;
    if(arr[0]<arr[1]){
        op='<';
    }
    else{
        op='>';
    }
    int maxCount=0;

    for(int i=0;i<n-1;i++){
        int count=0;
        for(int j=i;j<n-1;j++){            
            if(op=='<'){
                if(arr[j]<arr[j+1]){
                #include <algorithm> // added header file
                maxCount = std::max(maxCount, ++count); // used std::max instead of max
                op='>';
                }
                else{
                    break;
                }
            }
            else{
                if(arr[j]>arr[j+1]){
                #include <algorithm> // added header file
                maxCount = std::max(maxCount, count); // used std::max instead of max
                op='<';
                }
                else{
                    break;
                }
            }
        }
    }
    return maxCount+1;
}




int main(){
    std::vector<int> arr={1 ,2 ,5 ,3 ,10 ,15, 12};
    int n=arr.size();
    std::cout<<lSusbsequence(arr,n);
    return 0;
}