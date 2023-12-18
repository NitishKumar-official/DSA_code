#include<iostream>
using namespace std;
 int getMax( int array[], int size){
    int maxi;
    maxi=INT16_MIN;
    for(int i=0;i<size;i++)
    {

        maxi= max(maxi, array[i]);
        /*if(array[i]>=max){
            max=array[i];
        }*/
    }
    return maxi;
 }
 int getMin( int array[], int size){
    int min;
    min=INT16_MAX;
    for(int i=0;i<size;i++)
    {
        if(array[i]<=min){
            min=array[i];
        }
    }
    return min;
 }
int main()
{
    int size,max,min;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int array[size];
    cout<<"enter the element of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
   cout<<"maxium is"<< getMax(array,size)<<endl;
   cout<<"minium is"<< getMin(array,size)<<endl;


}


/*int main()
{
    int num[5]={8,8,6,7,3};
    int i;
   // max= num[0];
   // min= num[0];

   int max = INT16_MIN;
    int min = INT16_MAX;
    for(i=0;i<5;i++)
    {
        if(num[i]>=max )
            max=num[i];
        if(num[i]<=min)
         min=num[i];
    }
    cout<<"max="<<max<<endl;
    cout<<"min="<<min<<endl;
}*/