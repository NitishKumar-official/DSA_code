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
class CircularLinkedList
{
public:
    Node *head;
    CircularLinkedList()
    {
        head = NULL;
    }

    void inser_at_first()
    {
        int val;
        cout << "enter value:";
        cin >> val;
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }

        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }
    void inset_in_between()
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

    void insert_at_end()
    {
        Node *ptr = head;
        int val;
        cout << "enter value:";
        cin >> val;
        Node *new_node = new Node(val);
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
    void delete_at_first()
    {
        if (head == NULL)
        {
            return;
        }
        Node *tail = head;
        Node *ptr = head;

        while (tail->next != head)
        {
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
        free(ptr);
    }
    void delete_in_between()
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
    void delete_at_end()
    {
        Node *ptr = head;
        Node *ptr1 = head->next;

        while (ptr1->next != head)
        {
            //ptr = ptr->next;
            ptr=ptr1;
            ptr1 = ptr1->next;
        }
        ptr->next = head;
        free(ptr1);
    }

    void display()
    {
        Node *temp = head;
        do
        {
            cout << temp->val << endl;
            temp = temp->next;
        } while (temp != head);
    }
};

int main()
{
    CircularLinkedList cll;
    do
    {
        int choice;
        cout << "1.inser_at_first\n2.inset_in_between\n3.insert_at_end\n4.delete_at_first\n5.delete_in_between\n6.delete_at_end\n7.display " << endl;
        cout << "enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cll.inser_at_first();
            break; 
        case 2:
            cll.inset_in_between();
            break;
        case 3:
            cll.insert_at_end();
            break;
        case 4:
            cll.delete_at_first();
            break;
        case 5:
            cll.delete_in_between();
            break;
        case 6:
            cll.delete_at_end();
            break;
        case 7:
            cll.display();
            break;
        }
    } while (true);
    return 0;
}