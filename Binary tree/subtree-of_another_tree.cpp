#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *left;
    Node *right;
    Node(int value){
        val = value;
        left = NULL;
        right = NULL;
    }
};

bool inorder(Node* t, Node* s){
    if(t == NULL && s == NULL){
        return true;
    }
    else if(t == NULL || s == NULL){
        return false;
    }
    else if(t->val == s->val){
        return inorder(t->left, s->left) && inorder(t->right, s->right);
    }
    else{
        return false;
    }
}

int main(){
    // Create trees
    Node *T = new Node(1);
    T->left = new Node(2);
    T->right = new Node(3);
    T->left->left = new Node(4);
    T->left->right = new Node(5);

    Node *S = new Node(2);
    S->left = new Node(4);
    S->right = new Node(5);

    // Check if S is a subtree of T
    bool isSubtree = inorder(T, S);

    cout << (isSubtree ? "S is a subtree of T" : "S is not a subtree of T") << endl;

    return 0;
}