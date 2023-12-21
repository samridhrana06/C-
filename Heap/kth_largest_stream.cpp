#include<bits/stdc++.h>
using namespace std;

class kthlargest{
    priority_queue<int, vector<int>, greater<int>> pq;
    int size;

public:
    kthlargest(int k, vector<int>& nums) : size(k) {
        for(int i = 0; i < nums.size(); i++){
            add(nums[i]);
        }
    }

    int add(int val){
        pq.push(val);
        if(pq.size() > size){
            pq.pop();
        }
        return pq.top();
    }
};


int main(){
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    kthlargest kl(k, nums);
    cout << "The " << k << "th largest element is: " << kl.add(0) << endl;
    cout << "After adding -1, the " << k << "th largest element is: " << kl.add(-1) << endl;
    cout << "After adding 1, the " << k << "th largest element is: " << kl.add(1) << endl;
    cout << "After adding -2, the " << k << "th largest element is: " << kl.add(-2) << endl;
    cout << "After adding -4, the " << k << "th largest element is: " << kl.add(-4) << endl;
    cout << "After adding 0, the " << k << "th largest element is: " << kl.add(0) << endl;
    return 0;
}