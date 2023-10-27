#include<bits/stdc++.h>
using namespace std;

//create a map to store the sum and the path
map<int, vector<int>> mpp;

//create a struct for the binary tree
struct BinaryTreeNode {
    int data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

//create a function to traverse the tree in postorder
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

//create a function to find the max sum path
vector<int> maxSum(BinaryTreeNode* root) {
    // Initialize your stack and call postOrder
    // stack<pair<int, vector<int>>> stk;
    // vector<int> vec;
    // postOrder(root, 0, vec);
    
    // for (auto it = mpp.begin(); it != mpp.end(); ++it) {
    //     stk.push(make_pair(it->first, it->second));
    // }

    // return stk.top().second;

    // last element of the map is the max sum path
    return mpp.rbegin()->second;


}

//create a function to print the path
void printPath(vector<int> vec) {
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

//create a function to print the tree
void printTree(BinaryTreeNode* root) {
    if (root == NULL) {
        return;
    }
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}

//create a function to create a new node
BinaryTreeNode* newNode(int data) {
    BinaryTreeNode* node = new BinaryTreeNode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

//create a function to insert a node
BinaryTreeNode* insert(BinaryTreeNode* root, int data) {
    if (root == NULL) {
        root = newNode(data);
    }
    else if (data <= root->data) {
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right, data);
    }
    return root;
}

//create a function to find the max sum path
