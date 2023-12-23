#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* link;
};

struct Node* traverseElement(struct Node*head){
    struct Node*ptr=head;
    cout<<"element are:\n";

    do{
        cout<<ptr->data<<endl;
        ptr=ptr->link;
    }
    while(ptr!=head);

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

    head->data=5;
    head->link=second;

    second->data=10;
    second->link=third;

    third->data=15;
    third->link=forth;

    forth->data=20;
    forth->link=head;
   traverseElement(head);
   return 0;
}