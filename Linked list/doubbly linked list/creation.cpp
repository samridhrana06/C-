//help me with comments only not code


#include<bits/stdc++.h>
using namespace std;

struct node{

int data;
node *next;
node *prev;
};


//insertion of data
void insertdata(node **head_ref, int new_data){
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = *head_ref;
    new_node->prev = NULL;

    if((*head_ref) != NULL){
        (*head_ref)->prev = new_node;
  
    }
        *head_ref = new_node;
    }


//printing 

void printingnode(node *n){

    int count =0;
    while (n != NULL){
        cout<<n->data<<"->";
        n = n->next;
        
    }
    cout<<"\n";
}

void insertbetween(node *prev_node , int new_data){

    if(prev_node == NULL){
        cout<<"Previous node cannot be NULL";
        return ;
    }
    node *new_node = new node();

    new_node->data = new_data;
    new_node->next = prev_node->next;

    prev_node->next = new_node;
    new_node->prev = prev_node;

    if(prev_node != NULL){
        new_node->next->prev=new_node;
    }

}

// appending 
void append(node **head_ref, int new_data) {
    node *new_node = new node();
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    node *last = *head_ref;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
}

int main(){

// inserting 

    node *head = NULL;
    insertdata (&head,4);
    insertdata (&head,11);
    insertdata (&head,-3);


// inserting in between 

    insertbetween(head,10);

// appending 

    append(&head,90);

//printing 

    printingnode(head);



}