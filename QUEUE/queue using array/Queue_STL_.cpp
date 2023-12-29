#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> que;
    // push operation

    que.push(56);
    que.push(58);
    que.push(12);
    
    // to see front element

    cout<<que.front()<<endl;

    // to see the last element

    cout<<que.back()<<endl;

    // pop operation

    que.pop();
    que.pop();

    //  to cheak queue empty or not

    if(que.empty())
    cout<<"queue is empty"<<endl;
    else
    cout<<"queue is not empty"<<endl;

    // to cheak size 

    cout<<que.size()<<endl;


 
}