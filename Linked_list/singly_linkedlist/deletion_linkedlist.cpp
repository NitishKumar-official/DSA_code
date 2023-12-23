#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* Next;
};

void print_linkedList(struct Node*head)
{
while(head!=NULL){
    cout<<head->data<<endl;
    head=head->Next;

}
}

struct Node* Delete_first_node(struct Node*head){
    struct Node *ptr;
    ptr=head;
    head=head->Next;

    free(ptr);
    return head;
     
}

struct Node* Delete_in_between(struct Node*head,int index){
    struct Node*p=head;
    struct Node*q=head->Next;

    for(int i=0; i<index-1;i++){
        p=p->Next;
        q=q->Next;
    }

    p->Next=q->Next;
    free(q);
    return head;
}
struct Node* Delete_AT_end(struct Node*head){
    struct Node*p=head;
    struct Node*q=head->Next;

    while(q->Next!=NULL){
        p=p->Next;
        q=q->Next;
    }

    p->Next=NULL;
    free(q);
    return head;
}

struct Node * delete_at_index_with_value(struct Node* head, int value){
    struct Node*p=head;
    struct Node*q=head->Next;

    while(q->data!=value && q->Next!=NULL){
        p=p->Next;
        q=q->Next;
    }

    if(q->data==value){
        p->Next=q->Next;
        free(q);
    }
    return head;

}

int main(){

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    forth=(struct Node*)malloc(sizeof(struct Node));

    head->data=5;
    head->Next=second;

    second->data=8;
    second->Next=third;

    third->data=4;
    third->Next=forth;

    forth->data=11;
    forth->Next=NULL;

print_linkedList(head);
//head=Delete_first_node(head);
//head=Delete_in_between(head,2);
//head=Delete_AT_end(head);
head=delete_at_index_with_value(head,4);
cout<<"after delete first node"<<endl;
print_linkedList(head);

return 0;


}

