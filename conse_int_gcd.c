#include<stdio.h>

int min(int x, int y)
{
    if(x>y)
     return y;
    else
     return x;
}
int gcd(int m,int n)
{   int small;
    small=min(m,n);
    while(1)
    {
    if((m%small==0) && (n%small==0))
     return small;
    small=small-1;
    }
    return 0;
}
int main()
{   
    int m,n,result;
    printf("enter the values of m and n\n");
    scanf("%d%d",&m,&n);
    result= gcd(m,n);
    printf("gcd of two numbers is %d\n",result);
    return 0;
}
