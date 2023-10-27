#include<bits/stdc++.h>
using namespace std;

struct BinaryTreeNode {
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};


map<int, vector<int>> mpp;

void postOrder(BinaryTreeNode* root, int sum, vector<int> vec) {
    if (root == NULL) {
        return;
    }
    sum += root->data;
    vec.push_back(root->data);
    postOrder(root->left, sum, vec);
    postOrder(root->right, sum, vec);
    if (root->left == NULL && root->right == NULL) {
        mpp[sum] = vec;
    }
}

vector<int> maxSum(BinaryTreeNode* root) {
    // Initialize your stack and call postOrder
    // stack<pair<int, vector<int>>> stk;
    // vector<int> vec;
    // postOrder(root, 0, vec);
    
    // for (auto it = mpp.begin(); it != mpp.end(); ++it) {
    //     stk.push(make_pair(it->first, it->second));
    // }

    // return stk.top().second;
    return mpp.rbegin()->second;
}


// Path: max_root_sum.cpp
int main(){
    // input is 
    // 4 -2 3 4 0 5 6 0 3 0 0 0 0 0 0

    BinaryTreeNode* root = new BinaryTreeNode();
    root->data = 4;
    root->left = new BinaryTreeNode();
    root->left->data = -2;
    root->right = new BinaryTreeNode();
    root->right->data = 3;
    root->left->left = new BinaryTreeNode();
    root->left->left->data = 4;
    root->left->right = new BinaryTreeNode();
    root->left->right->data = 0;
    root->right->left = new BinaryTreeNode();
    root->right->left->data = 5;
    root->right->right = new BinaryTreeNode();
    root->right->right->data = 6;
    root->left->left->left = new BinaryTreeNode();
    root->left->left->left->data = 3;

    vector<int> vec = maxSum(root);
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;

}

