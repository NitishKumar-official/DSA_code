#include<iostream>
using namespace std;

int swapAlternative(int arr[], int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\t";
    }
}

int main(){
    int even[8]={4,5,8,6,9,8,7,8};
    int odd[9]={5,8,4,9,6,4,3,6,8};

swapAlternative(even, 8);
printArray(even,8);
cout<<"\n";
swapAlternative(odd, 9);
printArray(odd,9);

}


/*int main(){
    int arr[10]={2,5,8,6,9,5,6,8,5,5};
    for(int i=0;i<10;i=i+2){
        if(i+1<10){
            swap(arr[i],arr[i+1]);
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<"\t";
    }
}*/