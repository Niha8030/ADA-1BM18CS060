/* Given two text strings A of length n and B of length m, to transform A into B using a minimum number of operations of the following types: delete a character from A, insert a character into A, or change some character in A into a new character. The minimal number of such operations required to transform A into B is called the edit distance between A and B. For example, the edit distance(abbc, xbbacd) = 3 (change a to x; insert a after bb; insert d after c */

#include<bits/stdc++.h>
using namespace std;
 
int minimum(int a, int b, int c)
{
	return min(a,min(b,c));
}

int dist(string s1,string s2, int n, int m)
{
	if(n==0)
		return m;
	if(m==0)
		return n;
	if(s1[n-1]==s2[m-1])
		return dist(s1,s2,n-1,m-1);
	else
		return 1+minimum(dist(s1,s2,n,m-1),dist(s1,s2,n-1,m),dist(s1,s2,n-1,m-1));
}

int main()
{
	string s1,s2;
	cout<<"Enter two strings"<<endl;
	getline(cin,s1);
	getline(cin,s2);
	cout<<"Minimum operations required : "<<dist(s1,s2,s1.length(),s2.length())<<endl;
	return 0;
}
	
/* output
Enter two strings
tuesday
thursday
Minimum operations required : 2
*/
