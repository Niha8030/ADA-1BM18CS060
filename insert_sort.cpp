#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int n){
  
  int i,key,j;

  for( i=1;i<n;i++){
  
     key=arr[i];
     j=i-1;
     while(j>=0 && arr[j]>key){
     
        arr[j+1]=arr[j];
        j=j-1;

     }
     arr[j+1]=key;
  }
}


void printarr(int arr[],int n){

    int i;
    for(i=0;i<n;i++)
    cout<< arr[i]<<" ";
    cout<<endl;
        
}



int main(){

    int n;
    cout<<"enter the no. of elements to be inserted:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements the array:"<<endl;
    for(int i=0;i<n;i++)
         cin>>a[i];
    insertionsort(a,n);
    printarr(a,n);

}
