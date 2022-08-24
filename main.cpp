#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n){

    for(int i=0;i<n;i++){

        for(int j=0;j<n-1-i;j++){

          if(arr[j]>arr[j+1]){
              int temp= arr[j];
              arr[j]= arr[j+1];
              arr[j+1]=temp;

          }

        }

    }

}


int main(){
 int n,x;
 cout<<"Enter a value of size"<<endl;
 cin>>n;
 int arr[n];

 cout<<"Enter your number:"<<endl;
 for(x=0;x<n;x++)
    {
    cin>>arr[x];
    }

 cout<<"Before Sorting my array "<<endl;
 for(x=0;x<n;x++)
    {
    cout<<arr[x]<<" ";
    }

 bubble_sort(arr,n);

    cout<<endl;
    cout<<"After Sorting my array "<<endl;
 for(x=0;x<n;x++)
    {
    cout<<arr[x]<<" ";
    }

}
