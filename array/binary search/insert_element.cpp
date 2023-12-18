#include<iostream>
using namespace std;

int Lower_bound(int arr[], int start, int end,int num,int n){
    int mid;
    int ans=n;
    while(start<=end){
         mid=(start+end)/2;
         if(arr[mid]>=num){
            ans=mid;
            arr[ans]=num;
            end=mid-1;
         }
         else
         start=mid+1;
    }
    for(int i=0;i<n;i++){
       cout<<arr[i]<<"\t";
    }

}

int main(){
    int num,start,end,n;
    cout<<"enter a number"<<endl;
    cin>>num;
    cout<<"enter size of array"<<endl;
    cin>>n;
    start=0;
    end=n-1;
    int arr[n]={2,3,6,7,8,9,13,15,19,21};
   Lower_bound(arr, start, end,num,n);

}