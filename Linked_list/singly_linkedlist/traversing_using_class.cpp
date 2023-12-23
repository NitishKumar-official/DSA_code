#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

void insert_at_HEAD(Node *&head)
{
    int val;
    cout << "enter value:";
    cin >> val;
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

void inset_in_between(Node *&head)
{
    int val;
    cout << "enter value:";
    cin >> val;
    int index;
    cout << "enter index:";
    cin >> index;

    Node *ptr = head;
    Node *new_node = new Node(val);
    int i = 1;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}

void insert_at_end(Node *&head)
{
    int val;
    cout << "enter value:";
    cin >> val;
    Node *ptr = head;
    Node *new_node = new Node(val);
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
}

void delete_at_first(Node *&head)
{
    Node *ptr = head;
    head = ptr->next;
    ptr->next = NULL;
    free(ptr);
}

void delete_in_between(Node *&head)
{
    int index;
    cout << "enter index:";
    cin >> index;
    Node *ptr = head;
    Node *ptr2 = head->next;
    int i = 1;
    while (i != index - 1)
    {
        ptr = ptr->next;
        ptr2 = ptr2->next;
        i++;
    }
    ptr->next = ptr2->next;
    free(ptr2);
}

void delete_at_end(Node *&head)
{
    Node *ptr = head;
    Node *ptr1 = head->next;

    while (ptr1->next != NULL)
    {
        ptr = ptr->next;
        ptr1 = ptr1->next;
    }
    ptr->next = NULL;
    free(ptr1);
}

void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *head = NULL;

    do
    {
        int choice;
        cout << "1.insert_at_HEAD\n2.inset_in_between\n3.end_insert\n4.first_dlt\n5.between_dlt\n6.end_dlt\n7.display " << endl;
        cout << "enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            insert_at_HEAD(head);
            break;
        case 2:
            inset_in_between(head);
            break;
        case 3:
            insert_at_end(head);
            break;
        case 4:
            delete_at_first(head);
            break;
        case 5:
            delete_in_between(head);
            break;
        case 6:
            delete_at_end(head);
            break;
        case 7:
            Display(head);
            break;
        }
    } while (true);

    // METHOD 2

    /*Node first(1);
    cout<<first.val<<endl;
    cout<<first.next;*/

    // METHOD 1

    /*Node* first= new Node(1);
    cout<<first->val<<endl;
    cout<<first->next;*/

    return 0;
}
