#include<iostream>
using namespace std;

int frequencyGiver(int arr[],int n){
    int i,j,c;
    int freq[n];
    for(int i=0;i<n;i++){
        freq[i]=-1;
    }

    for(int i=0;i<n;i++){
        c=1;
        for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                c++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=c;
        }
    }


    for(i=0;i<n;i++)
    {
        if(freq[i]!=0){
        cout<<"frequency of"<<arr[i]<<"is"<<freq[i]<<endl;
       /* if(freq[i]==freq[i+1]){
         return 1;
        }
        else{
          return 0;
        }*/
        }
    }
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n]={2,2,3,3,5,5,6,6};
     int decision =frequencyGiver(arr,n);
     cout<<decision;
}



/*int main(){
    int n ,c,i,j;
    cout<<"enter value n"<<"\n";
    cin>>n;
     int freq[n];
    int arr[n]={4,5,8,8,9,4,9,5};
    for(int i=0;i<n;i++){
        freq[i]=-1;
    }

    for(int i=0;i<n;i++){
        c=1;
        for(int j=i+1; j<n;j++){
            if(arr[i]==arr[j]){
                c++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=c;
        }
    }

    for(i=0;i<n;i++)
    {
        if(freq[i]!=0){
        cout<<"frequency of"<<arr[i]<<"is"<<freq[i]<<endl;
        }
    }
}*/