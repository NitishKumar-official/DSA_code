#include<iostream>
using namespace std;
int binary_search(int arr[], int low, int high,int target)
{ 
    int mid;
    if(low>high){
        return -1;
    }
    mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(target>arr[mid]){
        return binary_search(arr,mid+1,high,target);
    }
    return binary_search(arr,low,mid-1,target);
}

int main()
{
    int low, high,index;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int target;
    cout<<"enter target"<<endl;
    cin>>target;
    int arr[n]={4,5,6,12,15,16,17,25,30,32,36,40};
    low=0;
    high=n-1;
     index=binary_search(arr,low,high,target);
     cout<<index;
}