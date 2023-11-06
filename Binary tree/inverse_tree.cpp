#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* invertTree(Node* root) {
    stack<Node*>st;
    st.push(root);

    while(!st.empty())
    {
        Node*node = st.top();
        st.pop();
        if(node != NULL){
            st.push(node->left);
            st.push(node->right);
            swap(node->left,node->right);
        }
    }
    
    return root;
}

void printTree(Node *root){
    if(root == NULL) return;
    printTree(root->left);
    cout<<root->data<<" ";
    printTree(root->right);
}

int main(){
    // fill the tree with 1,2,3,4,6,7,9
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(9);

    // Invert the tree
    root = invertTree(root);

    // Print the inverted tree
    printTree(root);

    return 0;
}