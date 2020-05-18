/*There are a total of n tasks you have to pick, labelled from 0 to n-1. Some tasks may have prerequisites tasks, for example to pick task 0 you have to first finish tasks 1, which is expressed as a pair: 0, 1
Given the total number of tasks and a list of prerequisite pairs, return the ordering of tasks you should pick to finish all tasks.
There may be multiple correct orders, you just need to return one of them. If it is impossible to finish all tasks, return an empty array.*/

#include <bits/stdc++.h> 
using namespace std;
stack<int> s;
int n,a[30][30],q[30],f=0,r=-1;
void lextopo()
{
	vector<int> indeg(n,0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==1)
				indeg[j]++;
		}
			
	}
	
	for(int i=0;i<n;i++)
	{
		if(indeg[i]==0)
			q[++r]=i;
	}
	int c=0;
	vector<int> toporder;
	while(f<=r)
	{
		int min=q[f++];
		
		toporder.push_back(min);
		for(int i=0;i<n;i++)
		{
			if(a[min][i]==1)
			{
				indeg[i]--;
				if(indeg[i]==0)
					q[++r]=i;
			}
			
		}
		c++;
	}
	if(c!=n)
	{
		cout<<-1<<endl;
		return;
	}
	for(int i=0;i<toporder.size();i++)
		cout<<toporder[i]<<" ";
			
}

int main()
{
	int p,x,y;
	vector<pair<int, int>> pre;
	cout<<"Enter the no of tasks: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			a[i][j]=0;
	}
	cout<<"Enter the no. of pairs: ";
	cin>>p;
	cout<<"Enter the pairs"<<endl;
	for(int i=0;i<p;i++)
	{
		cin>>x>>y;
		pre.push_back(make_pair(x,y));
		a[y][x]=1;
	}
	
	cout<<"The ordering of tasks you should pick to finish all tasks:"<<endl;
	lextopo();
	return 0;
}

/* output
Enter the no of tasks: 4
Enter the no. of pairs: 4
Enter the pairs
1 0
2 0
3 1
3 2
The ordering of tasks you should pick to finish all tasks:
0 1 2 3
Enter the no of tasks: 7
Enter the no. of pairs: 8
Enter the pairs
4 1
4 3
4 6
3 1
3 2
2 0
1 0
6 0
The ordering of tasks you should pick to finish all tasks:
0 5 1 2 6 3 4 
*/
