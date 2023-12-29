#include<iostream>
using namespace std;
#define MAX 5
int arr[MAX];
int rear=-1;
int front=-1;

 void enqueue(){
     int x;
     cout<<"enter element"<<endl;
     cin>>x;
    if((rear+1)%MAX==front){
        cout<<"queue is overflow"<<endl;
    }
    else if(rear==-1&&front==-1){
        front=rear=0;
    }
    else if(front!=0 && rear==MAX-1)
          rear=0;
    else
    rear=(rear+1)%MAX;

    arr[rear]=x;      

 }

 void dequeue(){  
    if((front==-1) && (rear==-1))  // condition to check queue is empty  
    {  
        cout<<"\nQueue is underflow..";
    }  
 else if(front==rear)  
{  
   cout<<"\nThe dequeued element is %d"<<arr[front];  
   front=-1;  
   rear=-1;  
}   
else  
{  
    cout<<"\nThe dequeued element is %d"<<arr[front];  
   front=(front+1)%MAX;  
}  
}  
void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
       cout<<"queue is empty"<<endl;
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
           cout<<arr[i]; 
            i=(i+1)%MAX;  
        }  
    }  
}  


int main(){
do
{
    int choice;
    cout<<"press \n 1.Enqueue\n 2.Dequeue\n 3.Display"<<endl;
    cout<<"enter your choice:"<<endl;
    cin>>choice;

  switch (choice)
    {
        case 1:enqueue();
                    break;
        case 2:dequeue();
                    break;
        case 3:display();
                    break;                   
        default: cout<<"Error 504"<<endl;
                break;
    }
}
while(1);
 return 0;
}

