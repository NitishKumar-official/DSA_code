#include<iostream>
using namespace std;
int findUniqueElement(int *arr, int size){
    int ans=0;
for(int i=0;i<size;i++){
    ans=ans^arr[i];

}
return ans;
}
int main(){
    int arr[9]={8,9,4,5,8,9,4,5,1};
int element=findUniqueElement(arr,9);
cout<<element;
}