#include<iostream>
using namespace std;

void tower(int n,char src,char temp,char dest)
{
	if(n==1)
	{
		cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl; 
	}
	else
	{
		tower(n-1,src,dest,temp);
		cout<<"Move "<<n<<" from "<<src<<" to "<<dest<<endl; 
		tower(n-1,temp,src,dest);
	}
}
int main()
{
	int num;
	cout<<"Enter the no. of discs"<<endl;
	cin>>num;
	tower(num,'A','B','C');
	return 0;
}
