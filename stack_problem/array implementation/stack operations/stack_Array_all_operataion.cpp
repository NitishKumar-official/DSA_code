#include<iostream>
#define MAX 5
int top=-1;
int stack_arr[MAX];
using namespace std;

void push(){
    if(top==MAX-1)
    cout<<"stack is overflow"<<endl;
    else
    {
        int pushed_item;
        cout<<"enter a item to be pushed in stack"<<endl;
        cin>>pushed_item;
        top=top+1;
        stack_arr[top]=pushed_item;
    }

}
void pop(){
    if(top==-1)
    cout<<"stack is underflow"<<endl;
    else{
        cout<<"poped item is:"<<stack_arr[top]<<endl;
        top=top-1;
    }
}

void peek(){
     cout<<"peek element is:"<<stack_arr[top]<<endl;
}

void display(){
    if(top==-1)
        cout<<"stack is empty"<<endl;
    else{
       for(int i=MAX-1;i>=0;i--)
        cout<<stack_arr[i]<<"\t";
    }
    cout<<endl;
    
}

void isEmpty(){
     if(top==-1)
        cout<<"stack is empty"<<endl;
     else
        cout<<"stack is not empty"<<endl;   
}

void isFull(){
    if(top==MAX-1)
    cout<<"stack is full"<<endl;
    else
    cout<<"stack is not full"<<endl;
}

void size(){
     if(top==-1)
        cout<<"stack is empty"<<endl;
     else
        cout<<" current size of stack is:"<<top+1<<endl;
}

int main(){
    int choice;
    
    do
    {
        
        cout<<"1.push"<<endl<<"2.pop"<<endl<<"3.peek"
        <<endl<<"4.display"<<endl<<"5.cheak isEmpty"
        <<endl<<"6.isFull"<<endl<<"7.cheak size"<<endl<<"8.quit"<<endl;
        cout<<"Enter your choice:";

         cin>>choice;
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3:peek();
            break;
            case 4:display();
            break;
            case 5:isEmpty();
            break;
            case 6:isFull();
            break;
            case 7:size();
            break;
            case 8:break;
            default:cout<<"thanku for quit"<<endl;
        }
    }
    while(1);

    return 0;
}


