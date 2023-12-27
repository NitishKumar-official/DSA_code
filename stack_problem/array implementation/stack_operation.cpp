#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>stk;
    stk.push(50);
    stk.push(57);
    stk.push(54);
    stk.push(52);
    stk.push(56);

    cout<<"size of stack is:"<<stk.size()<<endl;
    cout<<"top of stack is:"<<stk.top()<<endl;

    stk.pop();
    cout<<"top of stack is:"<<stk.top()<<endl;

    if(stk.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty because "<<stk.size()<<"  3element is in the stack"<<endl;
    }

}