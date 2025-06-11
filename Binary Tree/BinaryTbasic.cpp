#include<iostream>
using namespace std;

// Creating a tree.

class Node{
    public:
     int data;
     Node* left;
     Node* right;

     Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
     }

 

};


     Node* buildTree(Node* root){
        cout<<"Enter data\n";
        int data;
        cin>>data;
        root = new Node(data);

        if(data== -1){
            return NULL;
        }

        cout<<"Enter data for inserting in left"<<endl; 
        root->left = buildTree(root->left); 
        cout<<"Enter data for inserting in right"<<endl; 
        root->right = buildTree(root->right);

        return root;

     }

     void printTree(Node* root){// Preorder traversal NLR
        if(root == NULL){
            return ;
        }
        cout<<root->data<<" ";
        printTree(root->left);
        printTree(root->right);

     }



int main(){
    Node* root = NULL;
    buildTree(root);
    printTree(root);
    
    return 0;
}