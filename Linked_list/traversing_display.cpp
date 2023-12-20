#include<iostream>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    struct Node *link;
};

void Display_linkedList(struct Node *ptr){
   while(ptr!=NULL){
    cout<<"element:"<<ptr->data<<endl;
    ptr=ptr->link;
   }
}

int main(){

struct Node *head;
struct Node *second;
struct Node *third;

head= (struct Node *)malloc(sizeof(struct Node));
second=(struct Node *)malloc(sizeof(struct Node));
third= (struct Node *)malloc(sizeof(struct Node));

head->data=7;
head->link=second;

second->data=10;
second->link=third;

third->data=22;
third->link=NULL;

Display_linkedList(head);

}