#include<iostream>
using namespace std;
int main(){
    int n,i,mask;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter ith "<<endl;
    cin>>i;
    mask=1<<i;
    if(mask&n==1){
        cout<<1;
    
    }
    else{
        cout<<0;
    }





}