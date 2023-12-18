/*#include<iostream>
using namespace std;
int main(){
    int n,m,i,j,element;
    int arr1[6]={2,5,6,7,8,9};
    int arr2[2]={3,6};
    for(i=0;i<6;i++){
         element=arr1[i];
        for(j=0;j<2;j++){
        if(element==arr2[j]){
            cout<<arr2[j];
            arr2[j]=-1;
            break;
        }

        }
    }
    
}*/


//method2 optimization

/*#include<iostream>
using namespace std;
int main()
{
    int i,j,element;
    int arr1[6]={2,5,6,7,8,9};
    int arr2[2]={3,6};
    for(i=0;i<6;i++){
         element=arr1[i];
        for(j=0;j<2;j++){
            if(element<arr2[j])
            break;
        if(element==arr2[j]){
            cout<<arr2[j];
            arr2[j]=-1;
            break;
        }

        }
    }
}*/
//method 3 optimization

#include<iostream>
using namespace std;
int main(){
    int n,m,i=0,j=0;
    cout<<"entr n and m"<<endl;
    cin>>n>>m;
    int arr1[n]={2,3,4,5,8,9};
    int arr2[m]={3,4,6,8};
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i];
            i++;
            j++;
            
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }
}

