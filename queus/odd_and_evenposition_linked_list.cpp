// You are given a singly linked list 'HEAD' consisting of 'N' nodes.
// The task is to group all the odd nodes together, followed by the
// even nodes, maintaining the relative order of nodes given in the
// input. Note that we are talking about the node's positions and not
// the value stored in the node. Try to write an in-place algorithm
// (i.e., without using any extra space) to solve this problem.

// 2->1->3->4->6->5

// odd position nodes: 2, 3, 6
// even position nodes: 1, 4, 5
//  output : 2->3->6->1->4->5

// steps to solve this problem:
// 1. create two linked lists, one for odd position nodes and one for even position nodes.
// 2. traverse the given linked list and add the nodes to the respective linked lists.
// 3. merge the two linked lists.
// 4. return the head of the merged linked list.

// code with comments to explain
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* createNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

Node* insertNode(Node* head, int data){
    if(head==NULL){
        head = createNode(data);
    }
    else{
        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = createNode(data);
    }
    return head;
}

void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* oddEvenList(Node* head){
    Node* odd = NULL; // create a linked list for odd position nodes
    Node* even = NULL; // create a linked list for even position nodes
    Node* temp = head;
    int count = 1;
    while(temp!=NULL){ // traverse the given linked list
        if(count%2==1){ // if the position of the node is odd, add it to the odd linked list
            odd = insertNode(odd, temp->data);
        }
        else{ // if the position of the node is even, add it to the even linked list
            even = insertNode(even, temp->data);
        }
        temp = temp->next;
        count++;
    }
    temp = odd;
    while(temp->next!=NULL){ // traverse the odd linked list to reach the last node
        temp = temp->next;
    }
    temp->next = even; // add the even linked list to the end of the odd linked list
    return odd; // return the head of the merged linked list
}

int main(){
    Node* head = NULL;
    int n, data;
    cin>>n; // take input from user
    for(int i=0;i<n;i++){
        cin>>data;
        head = insertNode(head, data); // insert nodes in the linked list
    }
    head = oddEvenList(head); // call the function to group odd and even position nodes
    printList(head); // print the linked list
    return 0;
}
