#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1={1,2,3,4,5};
    /*auto itr= l1.begin();
    l1.end(  iterator pointing to the memory location after 5)
    auto itr= l1.end();
    cout<<*itr<<endl;*/

    /*auto rev_itr= l1.rbegin();
    cout<<*rev_itr<<endl;
    auto rev_itr= l1.rend(); //iterator pointing to memory location after 1
    cout<<*rev_itr<<endl;*/
   
    /*auto itr= l1.begin();
    advance(itr,2);
    cout<<*itr<<endl;*/
    

    // using range_based loop 

    /*for(auto num: l1){
        cout<<num<<endl;
    }*/

   //forward traversal

   /*for(auto itr=l1.begin(); itr!=l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;*/ 

    //reverse traversal 

   /* for(auto itr=l1.rbegin(); itr!=l1.rend(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;*/ 

    /*auto itr = l1.begin();         //insertion
    advance(itr,2);
    //l1.insert(itr,6);
    l1.insert(itr,3,6);
    for(auto itr=l1.begin(); itr!=l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;*/


    auto s_itr= l1.begin();                                  //deletion 
    advance(s_itr,2);    //s_itr pointing to 3rd elememt 

    auto e_itr = l1.begin();
    advance(e_itr,4);      //s_itr pointing to 5rd elememt 

    l1.erase(s_itr, e_itr);
    for(auto itr=l1.begin(); itr!=l1.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;


   return 0;
    

}
