#include<iostream>
using namespace std;
int main()
{
    int n,pos,val;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    cout<<"enter the value of pos"<<endl;
    cin>>pos;
    cout<<"enter the value"<<endl;
    cin>>val;
    int arr[n]={1,2,3,4,5,6,7,8,9};
    cout<<"insetion of element "<<endl;
    for(int i=0;i<n;i++){
        arr[pos]=val;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}