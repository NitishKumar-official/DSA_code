#include<iostream>
using namespace std;
 

 int inputArray( int arr[],  int size){
    cout<<"enter the array of element"<<endl;
for( int i=1;i<=size;i++)
{
cin>>arr[i];
}
cout<<"input of array is complete"<<endl;
 }

 int outputArray(int arr[],  int size){
    cout<<"entered element of array is "<<endl;
for( int i=1;i<=size;i++)
{
cout<<arr[i]<<endl;

}
cout<<"output of array is complete"<<endl;
 }

 int main()
 {
    int studentRoll[5];

    inputArray(studentRoll, 5);
    outputArray(studentRoll,5);



   int studentReg[10];
    inputArray(studentReg, 5);
    outputArray(studentReg,5);

 }