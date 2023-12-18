#include<iostream>
using namespace std;

int findDublicate(int arr[], int size){
        int ans=0;
for(int i=0; i<size; i++){
      ans= ans^arr[i];
      cout<<ans<<"\t";
    }
cout<<"\n";
    for(int i=0;i<size;i++){
        ans=ans^i;
        cout<<ans<<"\t";
        
    }
return arr[ans];
}

int main(){

    int arr[8]={1,2,3,4,9,9,6,7};
 int output =findDublicate(arr,8);
 cout<<output;

}
    