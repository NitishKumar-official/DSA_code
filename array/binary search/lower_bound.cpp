#include<iostream>
using namespace std;

int Lower_bound(int arr[], int start, int end,int num){
    int mid;
    int ans;
    while(start<=end){
         mid=(start+end)/2;
         if(arr[mid]>=num){
            ans=mid;
            end=mid-1;
         }
         else
         start=mid+1;
        

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
    int arr[n]={2,3,6,7,8,8,11,11,11,12};
   int LowerBound= Lower_bound(arr, start, end,num);
   cout<<arr[LowerBound]<<endl;
}