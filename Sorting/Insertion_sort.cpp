#include<iostream>
using namespace std;

int main(){
    int size;
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
     int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }


   
    cout<<"\nArray after sorted:"<<endl;
     for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}