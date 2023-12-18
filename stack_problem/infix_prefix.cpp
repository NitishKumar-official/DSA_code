#include<iostream>
#define MAX 13
using namespace std;
int top=-1;
string stk_arr[MAX];

void push(){
    if(top==MAX-1)
    cout<<"stack is overflow";
    else{
        top=top+1;
        stk_arr[top];
    }
}

void pop(){
    if(top==-1)
    cout<<"stack is underflow";
    else{
        stk_arr[top];
        top=top-1;
    }
}


int main(){
stk_arr[MAX]="a+b*c^d/e-f*g";

for(int i=0;i<MAX;i++){
    if(stk_arr[i]!="/" ||stk_arr[i]!="*" ||stk_arr[i]!="+" ||stk_arr[i]!="-"){
        cout<<stk_arr[i];
    }
    else if(stk_arr[i]==")"){
        while(stk_arr[i]=="("){
            cout<<stk_arr[i];
            i=i-1;
        }
    }

}



}