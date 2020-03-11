#include<iostream>
using namespace std;

int f=0;
int r=-1;
int a[20][20],q[20],visited[20],n,i,j;
void bfs(int v)
{
	
	for(i=0;i<n;i++)
	
		if(a[v][i] && !visited[i])
		
			q[++(r)]=i;
		
	
		if(f<=r)
		{ 
                 	visited[q[(f)]]=1; 
                 	bfs(q[(f)++]); 
                } 
}
int main()
{
	int v;
	cout<<"Enter the no. of vertices"<<endl;
	cin>>n;
	
	
	cout<<"Enter the adjacency matrix"<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			
		}
	}
	for(i=0;i<n;i++)
	{
		q[i]=0;
		visited[i]=0;
	}
	cout<<"Enter the start vertex"<<endl;
	
	cin>>v;
	bfs(v);
	cout<<"ALl the nodes reachable from "<<v<<" are "<<endl;
	for(i=0;i<n;i++)
	{
		if(visited[i])
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";
	return 0;
}

/* output
Enter the no. of vertices
4
Enter the adjacency matrix
0 1 1 0
0 0 0 1
0 1 0 0
0 0 0 0
Enter the start vertex
0
ALl the nodes reachable from 0 are 
1 2 3 
