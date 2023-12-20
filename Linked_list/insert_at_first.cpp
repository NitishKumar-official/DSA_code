#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

void Display_linkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "elelmet:" << ptr->data << endl;
        ptr = ptr->link;
    }
}

struct Node *Insertion_at_1st_linkedList(struct Node *first, int data )
{
    struct Node *begin;
    begin = (struct Node *)malloc(sizeof(struct Node));
    begin->data = data;
    begin->link = first;
   return begin;
};

struct Node *Insertion_in_between (struct Node *first, int data, int index){
  struct Node *Mid;
  Mid=(struct Node*)malloc(sizeof(struct Node));
  struct Node *p=first;
  int i=0;
  Mid->data=data;
  while(i!=index-1){
    p=p->link;
    i++;
  }

  Mid->link=p->link;
  p->link=Mid;
  return first;

}

struct Node *Insertion_at_end(struct Node *first, int data){
    struct Node* last;
    last=(struct Node*)malloc(sizeof(struct Node));
    last->data=data;
    struct Node*p =first;
    //int i=0;
    while(p->link!=NULL){
        p=p->link;
       // i++;
    }

     p->link=last;
    last->link=NULL;
 
    return first;

}

int main()
{

    struct Node *first;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    first->data = 2;
    first->link = second;

    second->data = 3;
    second->link = third;

    third->data = 4;
    third->link = forth;

    forth->data = 6;
    forth->link = NULL;

    first=Insertion_at_1st_linkedList(first, 56);
    first=Insertion_in_between(first, 52,3);
    first=Insertion_at_end(first,23);
     Display_linkedList(first);

    return 0;
}