#include<iostream>
using namespace std;
int printArray( int arr[], int n){
    for(int i=0; i<n;i++){
        cout<<arr[i];
    }
}

int sortONE(int arr[], int n){
    int left=0,right=n-1;
   while(left<right){
    while(arr[left]==0 && left<right){
        left++;
    }
    while (arr[right]==1
     && left<right){
        right--;
    }
    if( left<right){
        
        swap(arr[left],arr[right]);
         left++;
         right--;

    }

   }
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int arr[n]={1,0,1,1,0,0,1,0};
    sortONE(arr,n);
    printArray(arr, n);
}