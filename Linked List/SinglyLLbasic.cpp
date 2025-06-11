#include<iostream>
using namespace std;
 
//1. Create a node .

// class Node{
//     public:
//      int val;
//      Node* next;

//      // constructor
//      Node(int val){
//         this->val = val;
//         this->next = NULL;
//      }

// }; 

// int main(){
//     Node* n=new Node(12);

//     cout<<n->val<<" "<<n->next;
    
//     return 0;
// }

// // 2. Insert a node at Start.
// class Node{
//     public:
//     int val;
//     Node* next;

//     Node(int val){
//         this->val=val;
//         this->next = NULL;
//     }
// };

// void insertAtStart(Node* & head, int val){
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }

// void display(Node* head){
//     Node* temp= head;
//     while(temp!=NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }

// }

// int main(){
//     Node* head = NULL;
//     insertAtStart(head,12);

//     //display(head);

//     insertAtStart(head,24);

//     display(head);

    
//     return 0;
// }

// // 2. Insert a node at End.
// class Node{
//     public:
//     int val;
//     Node* next;

//     Node(int val){
//         this->val=val;
//         this->next = NULL;
//     }
// };

// void insertAtStart(Node* & head, int val){
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }
// void insertAtEnd(Node* & head, int val){
//      Node* new_node = new Node(val);

//      Node* temp = head;
//      while(temp->next != NULL){
//         temp = temp->next;
//      }

//      temp->next = new_node;
// }

// void display(Node* head){
//     Node* temp= head;
//     while(temp!=NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }

// }

// int main(){
//     Node* head = NULL;
//     insertAtStart(head,12);

//     //display(head);

//     insertAtStart(head,24);

//    // display(head);

//    insertAtEnd(head,6);

//    display(head);

    
//     return 0;
// }

// 3. Insert a node at Kth position.
// class Node{
//     public:
//     int val;
//     Node* next;

//     Node(int val){
//         this->val=val;
//         this->next = NULL;
//     }
// };

// void insertAtStart(Node* & head, int val){
//     Node* new_node = new Node(val);
//     new_node->next = head;
//     head = new_node;
// }
// void insertAtEnd(Node* & head, int val){
//      Node* new_node = new Node(val);

//      Node* temp = head;
//      while(temp->next != NULL){
//         temp = temp->next;
//      }

//      temp->next = new_node;
// }

// void insertAtKthPos(Node* & head, int val, int k){
//     Node* new_node = new Node(val);
//     Node* temp=head;

//     if(k==0){
//         insertAtStart(head,val);
//         return;
//     }

//     int current_pos=0;
     
//     while(current_pos != k-1){
//         temp = temp->next;
//         current_pos++;
//     }

//     new_node->next = temp->next;
//     temp->next = new_node;
// }

// void display(Node* head){
//     Node* temp= head;
//     while(temp!=NULL){
//         cout<<temp->val<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL";

// }

// int main(){
//     Node* head = NULL;
//     insertAtStart(head,12);

//     //display(head);

//     insertAtStart(head,24);

//    // display(head);

//    insertAtEnd(head,6);

//   // display(head);

//   insertAtKthPos(head,18,2);

//   display(head);

    
//     return 0;
// }

// 4. Update a node at Kth position.
class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next = NULL;
    }
};

void insertAtStart(Node* & head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}
void insertAtEnd(Node* & head, int val){
     Node* new_node = new Node(val);

     Node* temp = head;
     while(temp->next != NULL){
        temp = temp->next;
     }

     temp->next = new_node;
}

void insertAtKthPos(Node* & head, int val, int k){
    Node* new_node = new Node(val);
    Node* temp=head;

    if(k==0){
        insertAtStart(head,val);
        return;
    }

    int current_pos=0;
     
    while(current_pos != k-1){
        temp = temp->next;
        current_pos++;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

void updateAtKthPos(Node* & head, int val, int k){
    Node* new_node = new Node(val);
    Node* temp=head;

     

    int current_pos=0;
     
    while(current_pos != k){
        temp = temp->next;
        current_pos++;
    }

    temp->val = val;
}

void display(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL";

}

// int main(){
//     Node* head = NULL;
//     insertAtStart(head,12);

//     //display(head);

//     insertAtStart(head,24);

//    // display(head);

//    insertAtEnd(head,6);

//   // display(head);

//   insertAtKthPos(head,18,2);

//   //display(head);

//   updateAtKthPos(head,32,3);

//   display(head);

    
//     return 0;
// }

// // 5. Delete first node.

// void deleteFirstNode(Node* & head){
//     Node* temp = head;

//     head = temp->next;

//     free (temp);

// }

// int main(){
//        Node* head = NULL;
//     insertAtStart(head,12); 

//     insertAtStart(head,24); 

//    insertAtEnd(head,6); 

//   insertAtKthPos(head,18,2); 

//   updateAtKthPos(head,32,3); 

//     //deleteFirstNode(head);

//     display(head);

//     return 0;
// }

// // 6. Delete last node.

// void deleteLastNode(Node* & head){
//     if (head == NULL) {
//         return; // List is empty
//     }
//     if (head->next == NULL) {
//         delete head; // Only one node in the list
//         head = NULL;
//         return;
//     }

//     Node* temp = head;
//     while(temp->next->next != NULL){
//         temp = temp->next;
//     }

//     Node* temp1 = temp->next;
//     temp->next = NULL;
//      delete temp1;


// }

// int main(){
//        Node* head = NULL;
//     insertAtStart(head,12); 

//     insertAtStart(head,24); 

//    insertAtEnd(head,6); 

//   insertAtKthPos(head,18,2); 

//   updateAtKthPos(head,32,3); 

//     //deleteFirstNode(head);
//     deleteLastNode(head);

//     display(head);

//     return 0;
// }

// 7. delete node at kth position

// 6. Delete last node.

void deleteNodeAtKthPos(Node* & head, int k){
     if (head == NULL) {
        return; // List is empty
    }
    if (k == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    int current_pos=0;
    while(temp != NULL && current_pos < k - 1){
        temp = temp->next;
        current_pos++;
    }

    if (temp == NULL || temp->next == NULL) {
        return; // k is greater than the length of the list
    }

    Node* temp1 = temp->next;
    temp->next = temp->next->next;
     delete temp1;


}

int main(){
       Node* head = NULL;
    insertAtStart(head,12); 

    insertAtStart(head,24); 

   insertAtEnd(head,6); 

  insertAtKthPos(head,18,2);
  insertAtKthPos(head,20,4);
  insertAtKthPos(head,124,5); 

  updateAtKthPos(head,32,3); 

    //deleteFirstNode(head);
   // deleteLastNode(head);
   deleteNodeAtKthPos(head,2);

    display(head);

    return 0;
}