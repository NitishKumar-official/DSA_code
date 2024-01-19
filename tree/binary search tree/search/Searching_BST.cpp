#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* Search_BST(Node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
 
    if(key < root->data){
        return Search_BST(root->left, key);
    }
    if(key> root->data){
        return Search_BST(root->right, key);
    }
}

int main(){
    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right= new Node(3);
    root->right->right=new Node(6);

    if(Search_BST(root, 7)==NULL){
        cout<<"key not exist in the tree"<<endl;
    }
    else{
        cout<<"key exist in the tree"<<endl;
    }



}