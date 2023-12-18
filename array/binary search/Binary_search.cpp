#include<iostream>
using namespace std;
int main()
{
    int n,last, mid=0 , first,key;
    cout<<"inter n";
    cin>>n;
    cout<<"enter a key";
    cin>>key;
    int arr[n]={1,2,3,4,5,6,7,8,9};

    first=0;
    last=n-1;
    while (first<last)
    {
        mid=(first+last)/2;
        if(arr[mid]==key)
        {
            cout<<"mil gya"<<mid;
        }
        
            if(key>arr[mid]){
                first=mid+1;
            }
            else{
                last=mid-1;
            }
        

    
    }
}