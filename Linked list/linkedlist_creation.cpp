#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

//printing the linked list
void printinglist(node*n){
    int c=0;
    while(n != NULL){
        cout<<n->data<<"->";
        n = n->next;
        c++;
    }
    cout<<endl<<"The number of nodes in the linked list is: "<<c<<"\n" ;

}
int main()
{
    // Allocating memory for nodes in the heap

    node *head = new node();
    node *second = new node();
    node *third = new node();

    // Assigning data to the nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printinglist(head);
    return 0;
}