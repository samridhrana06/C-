#include<bits/stdc++.h>
using namespace std;


struct node{

    int data;
    node*left;
    node*right;
};

node *Inputdata(int data){

    node *temp = new node;
    temp->data = data;
    temp->right = NULL;
    temp->left = NULL;

    return temp;
}
void PrintValue(node*root){
    if(root == NULL) return;
    
    //printing root data
    cout<<root->data<<" ";

    //moving to the left
    PrintValue(root->left);

    //moving to the right
    PrintValue(root->right);
}

int main(){

node *root = Inputdata(1);
root->left = Inputdata(2);
root->right = Inputdata(3);
root->left->left = Inputdata(4);
root->left->right = Inputdata(5);

cout<<"Preorder Traversal"<<endl;

PrintValue(root);

    return 0;
}