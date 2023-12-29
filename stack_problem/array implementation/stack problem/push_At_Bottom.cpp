#include<iostream>
#include<stack>
using namespace std;

 void pushAtBottom(stack<int>&stk, int x){

    if(stk.empty()){
        stk.push(x);
        cout<<"done"<<stk.top();
        return ;
    }
    int ans= stk.top();
    stk.pop();

    pushAtBottom(stk,x);

    stk.push(ans);
}

int main(){
    stack<int>stk;
    int x;
    cout<<"enter a number"<<endl;
    cin>>x;
    stk.push(5);
     stk.push(5);
      stk.push(5);
       stk.push(5);
        stk.push(5);
    pushAtBottom(stk,x);

    int rana=stk.top();
    cout<<"rana"<<rana;

    return 0;
}