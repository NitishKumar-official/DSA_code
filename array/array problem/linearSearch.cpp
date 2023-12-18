#include<iostream>
using namespace std;

bool search(int arr[],int n,int item){
  for(int i=0;i<10;i++)
    {
        if(arr[i]==item){
            cout<<"number is present at "<<i<<"index"<<endl;
           return 1; 
        }
        
    }
  
return 0;
}

int main(){
    int item;
    int arr[10]={5,7,-2,10,22,-2,0,55,1,45};
    cout<<"enter item"<<endl;
    cin>>item;
    bool found=search(arr,10,item);
if(found){
    //cout<<"number is present"<<endl;
}
else{
    cout<<"number is not present "<<endl;
}

}




/*int main(){
    int item;
    int arr[10]={5,7,-2,10,22,-2,0,55,1,45};
    cout<<"enter item"<<endl;
    cin>>item;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==item){
            cout<<"number is presedent at "<<i<<"index"<<endl;
        }
        
    }
}*/