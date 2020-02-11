#include<stdio.h>

void towerOfHanoi(int n, char src, char dest, char aux){
 if(n==1){
  printf(" move disk 1 from rod %c to rod %c\n",src,dest );
  return; 
 }
 towerOfHanoi(n-1,src,aux,dest);
 printf(" move disk  %d from rod %c to rod %c\n",n, src,dest);
 towerOfHanoi(n-1,aux,dest,src);
}

int main(){
 int n;
 printf("enter number of disc:");
 scanf("%d",&n);
 towerOfHanoi(3,'A','C','B');
 return 0;
}
