#include <bits/stdtr1c++.h> // include necessary header files
using namespace std;

struct node
{ // define a struct for the linked list node
    int data;
    node *next;
};

void HeadInsert(node **head_ref, int d)
{                               // function to insert a new node at the beginning of the linked list
    node *newnode = new node(); // create a new node
    newnode->data = d;          // set the data for the new node
    newnode->next = *head_ref;  // set the next pointer of the new node to the current head of the list
    *head_ref = newnode;        // set the head of the list to the new node
}

void PrintNode(node *head)
{ // function to print the linked list
    int count = 0;
    while (head != NULL) // traverse the list until the end is reached
    {
        cout << head->data << "->"; // print the data of the current node
        head = head->next;          // move to the next node
        count++;                    // increment the count of nodes
    }
    cout << endl
         << "Ther are : " << count << " Elements"; // print the total number of nodes in the list
}

void InsertAfter(node *previousnode, int data)
{                                       // function to insert a new node after a given node in the linked list
    node *newnode = new node();         // create a new node
    newnode->data = data;               // set the data for the new node
    newnode->next = previousnode->next; // set the next pointer of the new node to the next node of the given node
    previousnode->next = newnode;       // set the next pointer of the given node to the new node
}

void append(node **head_reaf, int newData)
{                            // function to insert a new node at the end of the linked list
    node *temp = new node(); // create a new node
    temp->data = newData;    // set the data for the new node
    temp->next = NULL;       // set the next pointer of the new node to NULL

    if (*head_reaf == NULL)
    { // if the list is empty, set the head to the new node
        *head_reaf = temp;
        return;
    }

    node *last = *head_reaf; // traverse the list to find the last node
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = temp; // set the next pointer of the last node to the new node
    return;
}

void DeleteNode(node **head_ref, int key){
    // initializing of temp and previous node
    node *temp,*prev;

    //storing head in temp
    temp = *head_ref;

    //if head is the key
    while(temp != NULL && temp ->data == key){

        *head_ref = temp->next;
        free(temp);
        return;
    }

    //traverse the link list and find the key
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    //if we didn't find any 
    if(temp == NULL) return;
    
    prev->next = temp->next;
    free (temp);
}
int main()
{
    node *head = NULL; // initialize the head of the list to NULL

    cout << "Before insert" << endl;
    HeadInsert(&head, 5); // insert nodes at the beginning of the list
    HeadInsert(&head, 7);
    HeadInsert(&head, 9);
    HeadInsert(&head, 11);
    HeadInsert(&head, 15);
    PrintNode(head); // print the list

    cout << "After insert" << endl;
    InsertAfter(head->next->next, 1); // insert a node after the third node in the list
    PrintNode(head);                  // print the list

    append(&head, 99); // insert a node at the end of the list
    PrintNode(head);   // print the list


    DeleteNode(&head,7);
    PrintNode(head);
}