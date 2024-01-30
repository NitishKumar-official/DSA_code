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

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]>=arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    cout<<"\nArray after sorted:"<<endl;
     for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}