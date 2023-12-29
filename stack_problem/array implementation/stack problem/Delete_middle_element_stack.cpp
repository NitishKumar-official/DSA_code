#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&stk, int count, int s){
   
   if(count==s/2){
    
    stk.pop();
    cout<<"poped item";
    return ;
   }

   int ans= stk.top();
   stk.pop();

   solve(stk,count+1, s);
   
   stk.push(ans);


}

int main(){
    stack<int>stk;
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);

int count=0;
int s=stk.size();
 solve(stk,count, s);

return 0;

}