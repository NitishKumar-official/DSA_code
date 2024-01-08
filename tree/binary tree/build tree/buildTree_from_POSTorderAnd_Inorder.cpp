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


int search(int Inorder[],int start,int end,int curr ){
    for(int i=start; i<=end; i++)
    {
        if(Inorder[i]==curr)
        return i;
    }
    return -1;
}

Node* build_tree(int postorder[], int Inorder[], int start, int end){
    static int idx=4;

   if(start>end){
    return NULL;
   }

    int curr= postorder[idx];
    idx--;
    Node* node = new Node(curr);
     
     if(start==end){
        return node;
     }

    int pos= search(Inorder,start, end,curr);
    node->right=build_tree(postorder,Inorder,pos+1,end); 
    node->left=build_tree(postorder,Inorder,start,pos-1); 
  
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
    int postorder[]= {4,2,5,3,1};
    int Inorder[]={4,2,1,5,3};

    Node* root=build_tree(postorder,Inorder,0,4);
    Inorder_print(root);
}