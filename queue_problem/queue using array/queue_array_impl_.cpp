#include<iostream>
#define Max 5
using namespace std;

int front=-1;
int rear=-1;
 int Queue_arr[Max];

void inqueue_queue(){
    int item;
    cout<<"enter:"<<endl;
    cin>>item;
    if(rear==Max-1){
    cout<<"queue is overflow"<<endl;
    exit(1);
    }
    
    else{
        if(front==-1&& rear==-1)
        front=rear=0;
        else
        rear=rear+1;
        Queue_arr[rear]=item;
    }
}

void dequeue_queue(){
    if(front==-1 || front>rear){
        cout<<"queue is underflow"<<endl;
        exit(1);
    }
    else{
        cout<<"deleted item is :"<<Queue_arr[front];
        front=front+1;
    }
    if(front==rear){
        front=rear=-1;
    }
    else{
        front=front+1;
    }
}

void display_queue(){
    if(front==-1){
        cout<<"queue is empty";
        exit(1);
    }
    else{
        cout<<"total elemnet are"<<endl;
        for(int i=front; i<=rear;i++){
            cout<<"elements are"<<Queue_arr[i]<<endl;
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
        case 1:inqueue_queue();
                    break;
        case 2:dequeue_queue();
                    break;
        case 3:display_queue();
                    break;                   
        default: cout<<"Error 504"<<endl;
                break;
    }
}
while(1);
 return 0;

}