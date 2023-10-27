#include<bits/stdc++.h>
using namespace std;

struct  node
{
    int data;
    node*left;
    node*right;
};

node *insertValue(int data){
    node *temp = new node();
    temp->data = data;
    temp->left=NULL;
    temp->right=NULL;

    return temp;
}

void printValue(node *root){
    
    if(root == NULL){
        return;
    }

    //move to the left
    printValue(root->left);

    //move to the right
    printValue(root->right);

    //printing value
    cout<<root->data<<" ";
}

int main(){

node*root = insertValue(1);
root->left = insertValue(2);
root->right = insertValue(3);
root->left->left = insertValue(4);
root->left->right = insertValue(5);

cout<<"Post order traversal is: "<<endl;
printValue(root);

    return 0;
}