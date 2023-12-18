#include<iostream>
using namespace std;

int reverse(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
 int printArray(int arr[], int n){
  for(int i=0;i<n;i++){
     cout<<arr[i]<<"\t";
  }
  cout<<"\n";
}

int main(){
    int arr[5]={4,5,8,7,9};
    int brr[9]={4,7,8,9,6,3,2,1,5};
    reverse(arr,5);
    reverse(brr,9);
    printArray(arr,5);
     printArray(brr,9);

}


/*

int main()
{
    int arr[5]={5,6,4,1,3};
    for(int i=4;i>=0;i--)
    {
        cout<<arr[i]<<"\t";
    }
}*/