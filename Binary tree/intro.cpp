#include<bits/stdc++.h>
using namespace std;



struct node
{
    int data;
    node*left;
    node*right;
};

node *NewNode(int data){

    node*element = new node();
    element->data = data;
    element->left = NULL;
    element->right = NULL;


    return element;
}


// void printNode(node*n){

//     while (n!= NULL)
//     {
//         cout<<n->data<<" ";
//         n = n->left;
//         n = n->right;

//     }
//     cout<<endl;
    
// }


//-------------------------------    Inorder traversal
// void printNode(node*n){

//     if (n== NULL)
//     {
//         return ;
//     }
//         printNode(n->left);
//         cout<<n->data<<" ";
//         printNode(n->right);

//     // cout<<endl;
    
// }

// ------------------------------- Preorder traversal
// void printNode(node*n){

//     if (n== NULL)
//     {
//         return ;
//     }
//         cout<<n->data<<" ";
//         printNode(n->left);
//         printNode(n->right);

//     // cout<<endl;
    
// }


// ------------------------------- Postorder traversal 
void printNode(node*n){

    if (n== NULL)
    {
        return ;
    }
        printNode(n->left);
        printNode(n->right);
        cout<<n->data<<" ";


    // cout<<endl;
    
}
    int main(){
//make root node

node*root = NewNode(1);


root->left = NewNode(2);

root->right = NewNode(3);

root->left->left = NewNode(4);


printNode(root);

    return 0;
}