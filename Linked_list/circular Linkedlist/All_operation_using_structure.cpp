#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

struct Node *traverseElement(struct Node *head)
{
    struct Node *ptr = head;
    cout << "element are:\n";
    do
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    } while (ptr != head);
}
struct Node *inserAtFirst(struct Node *head, int data)
{
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head->link;

    ptr->data = data;

    while (p->link != head)
    {
        p = p->link;
    }

    p->link = ptr;
    ptr->link = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 5;
    head->link = second;

    second->data = 10;
    second->link = third;

    third->data = 15;
    third->link = forth;

    forth->data = 20;
    forth->link = head;
    head = inserAtFirst(head, 35);
    traverseElement(head);
    return 0;
}