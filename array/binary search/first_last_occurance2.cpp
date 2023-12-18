#include<iostream>
using namespace std;

int first_last(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int first=-1;
    int last=-1;
    int mid;
    while(start<end){
        mid=(start+end)/2;
        if(arr[mid]==target){
            if(first==-1)
            first=mid;
            else
            last=mid;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else
        end=mid-1;
    }
   cout<<"first:"<<first<<endl;
   cout<<"last:"<<last<<endl;
}

int main(){
    int size,target;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    cout<<"enter a target"<<endl;
    cin>>target;
    int arr[size]={2,4,6,8,8,8,11,13};
    int h=first_last(arr,size,target);
    cout<<h;
    
}