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

int main(){
    Node *root = new Node(5);
    root->left=new Node(4);
    root->right=new Node(9);

    root->left->left=new Node(10);
    root->left->right=new Node(12);


    cout<<root->val<<endl;
    cout<<root->left->val<<endl;
     cout<<root->right->val<<endl;

}