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
int total_occu(int first, int last){
   int total=(last-first)+1;
   return total;

}

int main()
{
    int key;
    cout<<"enter key";
    cin>>key;
    int arr1[12]={1,2,3,4,4,4,4,4,6,7,8,9};
    cout<<"the key is present at first index "<<firstOccu(arr1, 12,key)<<endl;
    cout<<"the key is present at last index "<<lastOccu(arr1, 12,key)<<endl;
   int first=firstOccu(arr1, 12,key);
   int last=lastOccu(arr1, 12,key);
    cout<<"total occurance "<<total_occu(first,last)<<endl;
}