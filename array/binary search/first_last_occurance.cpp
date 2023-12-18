#include<iostream>
using namespace std;
int firstOccu(int arr1[],int n, int key){
     int start, end , mid,ans;
     start=0;
     end=n-1;
     mid=start+(end-start)/2;

     while(start<=end){
        if(arr1[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr1[mid]>key){
            end=mid-1;
        }
        else if(arr1[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
     }
     return ans;
}
int lastOccu(int arr1[],int n, int key){
     int start, end , mid,ans;
     start=0;
     end=n-1;
     mid=start+(end-start)/2;

     while(start<=end){
        if(arr1[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr1[mid]>key){
            end=mid-1;
        }
        else if(arr1[mid]<key){
            start=mid+1;
        }
        mid=start+(end-start)/2;
     }
     return ans;
}

int main()
{
    int key;
    cout<<"enter key";
    cin>>key;
    int arr1[12]={1,2,3,4,4,4,4,4,6,7,8,9};
    cout<<"the key is present at "<<firstOccu(arr1, 12,key);
    cout<<"the key is present at "<<lastOccu(arr1, 12,key);
}