#include<iostream>
using namespace std;
int main()
{
    int n, pos=0;
    cout<<"enter the value of n "<<"enter the value of pos"<<endl;
    cin>>n>>pos;
    int arr[n]={1,2,3,4,5,6,7,8,9};
    for(int i=pos; i<n;i++){
        arr[i]=arr[i+1];
    }
    cout<<"aarry after delete operation";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}