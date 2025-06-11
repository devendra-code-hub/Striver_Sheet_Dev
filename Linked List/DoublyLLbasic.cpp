#include<iostream>
using namespace std;

// // 1. Create a node.
// class Node{
//     public:
//      int data;
//      Node* prev;
//      Node* next;

//      Node(int d){
//         this->data = d;
//         this->next = next;
//         this->prev = prev;
//      }
// };

// void display(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout<<temp->data<<" <=> ";
//         temp = temp->next;
//     }
//     cout<<"NULL";

// }


// int main(){
//    Node* node1 = new Node(12);
//    display(node1);

//     return 0;
// }

// 2. Insert a node at Start.
 
class Node{
    public:
     int data;
     Node* prev;
     Node* next;

     Node(int d){
        this->data = d;
        this->next = next;
        this->prev = prev;
     }
};

void insertAtStart(Node* & head, int data){
    Node* temp = head;
    Node* new_node = new Node(data);
    new_node->next = temp;
    temp->prev = new_node;
    head = new_node;
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" <=> ";
        temp = temp->next;
    }
    cout<<"NULL";

}


int main(){
   Node* node1 = new Node(12);
   //display(node1);
   Node* head = node1;
   insertAtStart(head,14);
   display(head);

    return 0;
}
