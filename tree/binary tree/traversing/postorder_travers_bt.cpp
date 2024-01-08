#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
  
    Node( int data){
        val=data;
        left = NULL;
        right = NULL;
    }
};

void Postorder(Node* root){
    if(root==NULL)
    return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->val<<"";
 
}

int main(){
    Node *root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(4);
    root->left->right=new Node(5);

    root->right->left=new Node(6);
    root->right->right=new Node(7);


    Postorder(root);
}