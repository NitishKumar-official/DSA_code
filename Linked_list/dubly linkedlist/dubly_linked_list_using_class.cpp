#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;
    Node(int data)
    {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void insert_at_first(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }

    void insert_in_between(int data, int index)
    {
        Node *new_node = new Node(data);

        Node *ptr = head;
        int i = 1;
        while (i != index - 1)
        {
            ptr = ptr->next;
            i++;
        }

        new_node->next = ptr->next;
        ptr->next = new_node;

        new_node->prev = ptr;
        new_node->next->prev = new_node;
        return;
    }

    void insert_at_end(int data)
    {
        Node *new_node = new Node(data);
        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    /*Node* new_node = new Node(3);
  CircularLinkedList cll;
   cll.head=new_node;
   cll.tail=new_node;

   cout<<new_node->val<<endl;
   cout<<cll.head->val;
   cout<<cll.tail->val;*/

    DoublyLinkedList cll;
    cll.insert_at_first(5);
    cll.insert_at_first(5);
    cll.insert_at_first(5);
    cll.insert_at_first(5);
    cll.display();
    cout << "bet" << endl;
    cll.insert_in_between(200, 2);
    cll.display();

    /*cll.insert_at_end(100);
    cll.display();*/
}