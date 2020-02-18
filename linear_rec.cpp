#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

int linear(int a[],int f,int l,int key){

    if(f>l)
        return -1;
    if(a[f]==key)
        return 1;
    if(a[l]==key) 
        return 1;
    return linear(a,f+1,l-1,key);  
}


int main(){

    int key,n;
    cout<<"enter the no. of elements  and key"<<endl;
    cin>>n>>key;
    int arr[n];
    cout<<"enter the elements in array"<<endl;
    for(int i=0;i<n;i++){
    
    cin>>arr[i];
    }
    auto start = high_resolution_clock::now();
    cout<<linear(arr,0,n,key)<<endl;
    auto stop = high_resolution_clock::now();  
    auto duration = duration_cast<microseconds>(stop-start);
    cout<<"Time taken :"<<duration.count()<<"microseconds"<<endl;
    return 0;
}
