#include<iostream>
#include<stack>
using namespace std;

// 1. Create a Stack.  push pop operation

// int main(){
//     stack<int> s;
//     // s.push(12);
//     // s.push(24);
//     // s.push(36);
//     for(int i=1; i<=10; i++){
//         s.push(i*12);
//     }

//     while(!s.empty()){ 
//         cout<<s.top()<<" ";
//         s.pop();
//     }
    
//     return 0;
// }

// Stack Implementation using Array
class Stack{
     public:
      int *arr;
      int top;
      int size;

      Stack(int size){
        this->size = size;
        arr = new int[size]; // ???
        this->top = -1;

      }

      void push(int element){
        if(size > top + 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack overflow\n";
        }

      }

      void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack underflow\n";
        }

      }

      int peak(){

        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty\n";
            return -1;
        }

      }

      bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
      }

};

int main(){
    Stack s(5);
    for(int i=1; i<=5; i++){
        s.push(i*2);
    }
    cout<<s.peak()<<" ";
    s.pop();
    
    return 0;
}
