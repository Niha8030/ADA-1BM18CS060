include<stdio.h>
#include<conio.h>
int gcd(int m,int n)
{   
   while(m!=n)
   {
     if(m>n)
      m=m-n;
    else
      n=n-m;
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
© 2020 GitHub, Inc.
