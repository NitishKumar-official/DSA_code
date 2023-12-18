#include<iostream>
#include<stack>
using namespace std;

int main(){
    string s="[()]{}[()()]()";

    stack<char>stk;
   for(int i=0;i<s.length();i++){
       if(s[i]=='['|| s[i]=='{'||s[i]=='(')
       {
        stk.push(s[i]);
       }

       
    else
    {
         if(!stk.empty())
         {
            if(stk.top()=='(' && s[i]==')' ||stk.top()=='{' && s[i]=='}' ||stk.top()=='['&& s[i]==']' )
             {
                stk.pop();
             }
             else
                 cout<<"false";

         }
         else
             cout<<"false";

    }

   }

   if(stk.empty())
       cout<<"true";
   else
       cout<<"false";
}

