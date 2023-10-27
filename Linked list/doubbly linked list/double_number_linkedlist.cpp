// You are given the head of a non-empty linked list representing a non-negative integer without leading zeroes.

// Return the head of the linked list after doubling it.
// Input: head = [1,8,9]
// Output: [3,7,8]
// Explanation: The figure above corresponds to the given linked list which represents the number 189. Hence, the returned linked list represents the number 189 * 2 = 378.

// Input: head = [9,9,9]
// Output: [1,9,9,8]
// Explanation: The figure above corresponds to the given linked list which represents the number 999. Hence, the returned linked list reprersents the number 999 * 2 = 1998. 

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

//convert linked list into integer
node *convert(Node* head){

    // check if head is null 
    if(head==NULL){
        return 0;
    }

    //convert linked list into integer 
    

    int num=0;
    while(head!=NULL){
        num=num*10+head->data;
        head=head->next;
    }

    //convert nums into linkeďlist
    Node* head2=NULL;
    while(num!=0){
        Node* temp=new Node();
        temp->data=num%10;
        temp->next=head2;
        head2=temp;
        num=num/10;
    }
reverse
}


int main()

}
