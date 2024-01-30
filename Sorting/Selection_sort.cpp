#include<iostream>
using namespace std;

int main(){
    int size;
    int min;
    cout<<"enter size of array:";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout<<" element at index:"<<i<<endl;
        cin>>arr[i];
    }
    
     cout<<"Array before sorted:"<<endl;
     for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }

   for(int i=0; i<size-1; i++){
    min=i;
    for(int j=i+1; j<size; j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }
    int temp;
    temp =arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
   }

   
    cout<<"\nArray after sorted:"<<endl;
     for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}