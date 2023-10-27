// inserting elements when you have array

#include<bits/stdc++.h>
using namespace std;


struct  node
{
    int data;
    node *next;
    node *prev;
};

node* construct(vector<int>&arr){
    //first eleement as new node
    node *temp = new node{arr[0],nullptr,nullptr};


    temp->prev = NULL;

    node *head = temp;


    for (int i = 1; i < arr.size(); i++)
    {
        node *cur = temp;

        temp->next=new node{arr[i],nullptr,nullptr};

        temp = temp->next;

        temp->prev = cur;

    }
    
    temp->next=NULL;

    return head;

}


int main(){

    vector<int>arr = {17,1 ,23, 11, 40, 22, 24, 9, 41, 19, 2, 10, 47};

    node *head = construct(arr);

    node *temp = head;
    while(head != NULL){
        cout<<head->data<<"->";
        head= head->next;
    }
    return 0;
}

