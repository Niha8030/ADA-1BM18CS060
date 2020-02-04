#include<stdio.h>

int gcd(int m,int n)
{   
    int result=0;
    if((m==0)||(n==0))
    {
       return result; 
    }
    else
    {   int i;
        for(i=1;i<=n && i<=m;i++)
        {
            if((m%i==0)&&(n%i==0))
            {
                result=i;
            }
        }
        return result;
    }
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
