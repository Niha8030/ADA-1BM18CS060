/* Sort a given set of N integer elements using Quick Sort technique and compute its time taken */

#include<bits/stdc++.h>
using namespace std::chrono;
using namespace std;
int a[30];
int partition(int l,int h)
{
	int pivot=a[l];
	int i=l,j=h;
	while(i<j)
	{
		do{
			i++;
		}while(a[i]<=pivot);
		do{
			j--;
		}while(a[j]>pivot);
		if(i<j)
			swap(a[i],a[j]);
	}
	swap(a[l],a[j]);
	return j;
}

void quicksort(int l,int h)
{
	if(l<h)
	{
		int j=partition(l,h);
		quicksort(l,j);
		quicksort(j+1,h);
	}
}

int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
		a[i]=rand()%n;
	a[n]=99999;
	auto start=high_resolution_clock::now();
	quicksort(0,n);
	auto stop=high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start); 
	cout<<"Sorted array is"<<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	cout<<"Time taken : "<<duration.count()<<" microseconds"<<endl;
	return 0;
}

/* output
Enter the size of the array
10
Sorted array is
1
2
3
3
5
5
6
6
7
9
Time taken : 2 microseconds
*/
