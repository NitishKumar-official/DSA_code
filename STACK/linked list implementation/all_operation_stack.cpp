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

class stack_opr
{
public:
    Node *top;
    stack_opr()
    {
        top = NULL;
    }

    void isEmpty()
    {
        if (top == NULL)
        {
            cout << "stack is empty" << endl;
        }
        else
        {
            cout << "element stack is not empty"<<endl;
        }
    }
    void isFull()
    {
        Node *p;
        if (p == NULL)
        {
            cout << "stack is full" << endl;
        }
        else
        {
            cout << "stack is not full" << endl;
        }
    }
    void pushItem()
    {
        Node *p;
        if (p == NULL)
        {
            cout << "stack is overflow" << endl;
        }
        else
        {
            int val;
            cout << "enter value" << endl;
            cin >> val;
            Node *new_node = new Node(val);
            new_node->next = top;
            top = new_node;
            return;
        }
    }
    void popItem()
    {
        if (top == NULL)
        {
            cout << "stack is underflow" << endl;
        }
        else
        {
            Node *ptr = top;
            top = top->next;
            free(ptr);
            return;
        }
    }

    void display()
    {
        Node *ptr = top;
        while (ptr != NULL)
        {
            cout << ptr->val << endl;
            ptr = ptr->next;
        }
    }
};

int main()
{
    stack_opr stk;

    do
    {
        int choice;
        cout << "1.IsEmpty 2.Isfull 3.pushItem 4.popItem 5.Display 6. exit" << endl;
        cout << "enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            stk.isEmpty();
            break;
        case 2:
            stk.isFull();
            break;
        case 3:
            stk.pushItem();
            break;
        case 4:
            stk.popItem();
            break;
        case 5:
            stk.display();
            break;
        default:
            exit(0);
            break;
        }
    } while (true);
    return 0;
}
