/* Write a program for the following: The Longest Increasing Subsequence (LIS) problem is to find the length of the longest subsequence of a given sequence such that all elements of the subsequence are sorted in increasing order. */

#include<bits/stdc++.h>
using namespace std;

int lis( int arr[], int n )  
{  
	int lis[n]; 
		   
	lis[0] = 1;    
		  
	for (int i = 1; i < n; i++ )  
	{ 
		lis[i] = 1; 
		for (int j = 0; j < i; j++ )   
			if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
				lis[i] = lis[j] + 1;  
	} 
	return *max_element(lis, lis+n); 
}  

int main()  
{  
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"The length of the longest subsequence of the given sequence is : "<<lis(a,n)<<endl;
	
	return 0;

    
}

/* output
Enter the size of the array
5
Enter the elements of the array
3 10 2 1 20
The length of the longest subsequence of the given sequence is : 3
*/
