#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;

      Node(int data){
        this->data = data;
        this->next = NULL;
      }
};

class Queue{
       Node* qfront;
       Node* rear;
       int size;

       public:
        Queue(){
            this->qfront = NULL;
            this->rear = NULL;
            this->size = 0;
        }

        void enqueue(int data){
            Node* new_node = new Node(data);
            if(qfront == NULL){
                qfront = rear = new_node;
            }

            rear->next = new_node;
            rear = new_node;
            size++;
        }

        int get_front(){
            if(qfront == NULL) return -1;

            return qfront->data;
        }

        void dequeue(){
            if(qfront == NULL){
                return;
            }
            else{
                Node* oldqfront = qfront;
                Node* newqfront = qfront->next;
                qfront = newqfront;

                if( qfront == NULL) rear =NULL;
                oldqfront->next = NULL;
                delete oldqfront;
                size--;
            }
        }
};

int main(){
         Queue q;
         q.enqueue(12);
         q.enqueue(16);
          
        //cout<<q.get_front()<<" ";
        q.dequeue();
        cout<<q.get_front()<<" ";
          
    return 0;
}