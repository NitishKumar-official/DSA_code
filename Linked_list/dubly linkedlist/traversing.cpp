#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node*Next;
    struct Node*Prev;
};

void traverse_dubly_linked(struct Node* head){
struct Node*ptr=head;

while(ptr!=NULL)
{
    cout<<ptr->data<<endl;
    ptr=ptr->Next;
    
}
if(ptr==NULL){
    ptr=ptr->Prev;
    cout<<ptr->data;
        while(ptr!=NULL){
            cout<<"hii";
             ptr=ptr->Prev;
            cout<<ptr->data<<endl;
           
        }
    }



}

int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*forth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    forth=(struct Node*)malloc(sizeof(struct Node));

    head->data=10;
    head->Prev=NULL;
    head->Next=second;

    second->data=20;
    second->Prev=head;
    second->Next=third;

    third->data=30;
    third->Prev=second;
    third->Next=forth;

    forth->data=40;
    forth->Prev=third;
    forth->Next=NULL;
     traverse_dubly_linked(head);
}