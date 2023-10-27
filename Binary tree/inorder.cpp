#include<bits/stdc++.h>
using namespace std;



struct node{
    int data;
    node*left;
    node*right;
};

node *NewNode(int data){
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

void printInorder(node* root){
    if(root == NULL){
        return ;
    }

   

    // first traverse left part of tree
    printInorder(root->left);

     // print data
    cout<<root->data<<" ";

    //traverse right part of the tree
    printInorder(root->right);
    
    
    }


int main(){

node *root= NewNode(1);
root->left=NewNode(2);
root->right = NewNode(3);
root->left->left = NewNode(4);
root->left->right = NewNode(5);



cout<<"In order traversal of Tree: "<<endl;
printInorder(root);
    return 0;
}