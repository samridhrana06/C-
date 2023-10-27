void printList(Node *list){ 

   Node *ptr = list;   

 for(;ptr!=nullptr;ptr= ptr->next){  

      cout<<ptr->data<<" "; 

   } 

}

Node *deleteLast(Node *list){

    // Write your code here  

  Node *ptr = list, *p ;   

 while(ptr->next !=nullptr){  

      p = ptr;      

  ptr = ptr->next; 

   }  

  p->next = nullptr;  

  delete ptr;    

printList(list);

    }