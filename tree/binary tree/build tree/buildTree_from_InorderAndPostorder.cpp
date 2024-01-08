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

int search(int Inorder[], int start, int end,int curr  ){
    for(int i=start; i<=end; i++){
        if(Inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

Node* BuidlTree(int PreOrder[], int Inorder[], int start, int end){
    static int idx =0;
    if(start > end){
        return NULL;
    }
    int curr= PreOrder[idx];
    idx++;
    Node* node = new Node(curr);
    if(start==end){
        return node;
    }
    int pos = search(Inorder, start, end, curr);
    node->left= BuidlTree(PreOrder, Inorder,start, pos-1);
    node->right=BuidlTree(PreOrder, Inorder, pos+1,end);

    return node;
}

void Inorder_print(Node* root){
    if(root==NULL)
    return;
    Inorder_print(root->left);
    cout<<root->data<<"";
    Inorder_print(root->right);
}

int main(){

    int PreOrder[]={1,2,4,3,5};
    int Inorder[]={4,2,1,5,3};

    Node* root=BuidlTree(PreOrder,Inorder,0,4);
    Inorder_print(root);

    return 0;

}