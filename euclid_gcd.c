#include<stdio.h>
#include<conio.h>
int gcd(int m,int n)
{   int rem;
    while(n!=0)
    {
        rem=m%n;
        m=n;
        n=rem;
    }
    return m;
}
int main()
{   
    int m,n;
    printf("enter the values of m and n\n");
    scanf("%d%d",&m,&n);
    m= gcd(m,n);
    printf("gcd of two numbers is %d\n",m);
    return 0;
}
