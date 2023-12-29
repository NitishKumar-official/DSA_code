#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class All_queue_opr
{
public:
    Node *front = NULL;
    Node *rear = NULL;

    void isEmpty()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            cout << "queue is not empty" << endl;
        }
    }
    void isFull()
    {
        Node *ptr;
        if (ptr == NULL)
        {
            cout << "queue is full" << endl;
        }
        else
        {
            cout << "queue is not full" << endl;
        }
    }
    void enQueue()
    {
        Node *ptr;
        if (ptr == NULL)
        {
            cout << "queue is already full" << endl;
        }
        else
        {
            int val;
            cout << "enter a number:\n";
            cin >> val;
            Node *new_node = new Node(val);
            if (front == NULL && rear == NULL)
            {
                front = new_node;
                rear = new_node;
            }
            else
            {
                rear->next = new_node;
                rear = new_node;
            }
        }
    }

    void deQUEUE()
    {
        if (front == NULL && rear == NULL)
        {
            cout << "queue is empty" << endl;
        }
        else
        {
            Node *ptr = front;
            front = ptr->next;
            free(ptr);
        }
    }

    void display()
    {
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    All_queue_opr quee;
  
  do{
    int choice;
    cout<<"1.IsEmpty 2.Isfull 3.Enquee 4.Dequee 5.Display 6. exit"<<endl;
    cout<<"enter your choice:";
    cin>>choice;

    switch(choice)
    {
        case 1: quee.isEmpty();break;
        case 2: quee.isFull();break;
        case 3: quee.enQueue();break;
        case 4: quee.deQUEUE();break;
        case 5: quee.display();break;
        default: exit(0);break;
    }
  }while(true);
   
}