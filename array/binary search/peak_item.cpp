#include<iostream>
using namespace std;

int peakItem(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid;
    mid=start+(end-start)/2;
    while(start<mid){
      
      if(arr[mid-1]<arr[mid]>arr[mid+1])
      {
        return mid;
      }
        else if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }
        else if(arr[mid]>arr[mid+1])
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
      
    }

}


int main(){
    int peakitem;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n]={0,1,2,3,4,8,9,10,9,8,7,6,1,0};
     cout<<"peak value is:";
     cout<<peakItem(arr,n)<<endl;


}