#include<iostream>
using namespace std;
int main()
{
    int n,i,j,maxi=0,mini=0;
    cout<<"entr n"<<endl;
    cin>>n;
    int arr[n]={2,3,6,5,4,1};
    for(i=0; i<n;i++){
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==5){
            maxi=max(arr[i],arr[j]);
            mini=min(arr[i],arr[j]);
             cout<<mini;
            cout<<maxi;
            cout<<endl;
            }
        }
    }
   
}