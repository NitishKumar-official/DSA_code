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

    int isEmpty()
    {
        if (top == NULL)
        {
            // cout << "stack is underflow" << endl;
            return 1;
        }
        else
        {
            // cout << "element are exist ine the stack";
            return 0;
        }
    }
    int isFull()
    {
        Node *p;
        if (p == NULL)
        {
            // cout<<"stack is overflow"<<endl;
            return 1;
        }
        else
        {
            // cout<<"space are avilable in stack"<<endl;
            return 0;
        }
    }
    void pushItem()
    {
        if (isFull())
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
    void popItem(){
        if(isEmpty()){
            cout<<"stack is underflow"<<endl;
        }
        else{
           Node* ptr=top;
           top=top->next;
            free(ptr);
            return;
            

        }

    }

    void display(){
        Node* ptr=top;
        while(ptr!=NULL){
            cout<<ptr->val<<endl;
            ptr=ptr->next;
        }
    }
};

int main()
{
    stack_opr stk;
    stk.isEmpty();
    stk.isFull();
    stk.pushItem();
    stk.pushItem();
    stk.display();
    cout<<"pop"<<endl;
    stk.popItem();
    stk.display();
    return 0;
}
