/* Write program to obtain the Topological ordering of vertices in a given digraph. */

#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
int n,a[30][30],visited[30];
void topo(int v)
{
	visited[v]=1;
	for(int i=1;i<=n;i++)
	{
		if(a[v][i]==1 && !visited[i])
			topo(i);
	}
	s.push(v);
}

int main()
{
	cout<<"Enter the no of vertices"<<endl;
	cin>>n;
	cout<<"Enter the adjacency matrix"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>a[i][j];
	}
	for(int i=1;i<=n;i++)
		visited[i]=0;
	for(int i=1;i<=n;i++)
	{
		if(!visited[i])
			topo(i);
	}
	
	cout<<"The topological ordering of vertices is"<<endl;

	while(s.empty()==false)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<"\n";
	return 0;
}

/* output
Enter the no of vertices
6
Enter the adjacency matrix
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 1 0 0
0 1 0 0 0 0
1 1 0 0 0 0
1 0 1 0 0 0
The topological ordering of vertices is
6 5 3 4 2 1 
Enter the no of vertices
7
Enter the adjacency matrix
0 1 1 0 0 0 0
0 0 0 0 1 0 1
0 0 0 0 0 1 0
1 1 1 0 0 1 1
0 0 0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 1 1 0
The topological ordering of vertices is
4 1 3 2 7 6 5 
*/	
