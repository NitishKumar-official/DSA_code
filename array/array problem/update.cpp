#include<iostream>
using namespace std;

int update( int arr[], int n){
    arr[0]=120;
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<"\t";
    }   
}
int main()
{
    int arr[4]={1,2,3,4};
    cout<<"it is updated array"<<endl;
    update(arr,4);
    cout<<"it is main array"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<"\t";
    }
}