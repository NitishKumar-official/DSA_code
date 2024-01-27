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
Node* insertBST(Node *root, int val){

    if(root==NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left= insertBST(root->left, val);
    }
    else{
        root->right=insertBST(root->right, val);
    }

    return root;
}

Node* find_Min(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}

// Delete in BST
Node* deleteInBst(Node* root, int key){


    if(root==NULL){
        return root;
    }
    if(key<root->data){
        root->left=deleteInBst(root->left, key);
    }
    else if(key>root->data){
        root->right=deleteInBst(root->right, key);
    }
    else
    {
        if(root->left==NULL){
            Node* temp= root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            Node* temp= root->left;
            free(root);
            return temp;
        }

        //find seccessior

        Node* temp = find_Min(root->right);
        root->data=temp->data;
        root->right=deleteInBst(root->right,temp->data);

    }
    return root;
}

void Inorder(Node*root){
    if(root==NULL){
        return ;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

int main(){
    Node* root=NULL;
    root=insertBST(root,5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);

    Inorder(root);

    root=deleteInBst(root,7);
    Inorder(root);
    return 0;
}
