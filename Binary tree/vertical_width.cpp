#include<bits/stdc++.h>
using namespace std;

unordered_set<int>st;
int verticalWidth(Node *root){
st.clear();
Width(root,hd);
return st.size();
}

void Width(Node *root, int hd){
    if(root != null){
    Width(root->left,hd-1);
    st.insert(hd);
    Width(root->right,hd+1);
    }
}

int main(){

// fill the tree
Node *root = new Node(1);
root->left = new Node(2);
root->right = new Node(3);
root->left->left = new Node(4);
root->left->right = new Node(5);
root->right->left = new Node(6);
root->right->right = new Node(7);

cout<<verticalWidth(root);



    return 0;
}