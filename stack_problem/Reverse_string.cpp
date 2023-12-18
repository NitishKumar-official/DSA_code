#include<iostream>
#include<stack>
using namespace std;

int main(){
    string name="nitish";
    stack<char>stk;

    for(int i=0;i<name.size();i++){
        char s =name[i];
        stk.push(s);
    }
   string ans="";
    while(!stk.empty()){
        char s= stk.top();
        ans.push_back(s);

        stk.pop();
    }
    cout<<"reverse string is"<<ans;

}