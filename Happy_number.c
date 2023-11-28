#include<stdio.h>
int main()
{
 int n,s=0,j;
 scanf("%d",&n);
  while(s!=1 && s!=4)
  {
   s=0;
   while(n>0)
  {
    j=n%10;
    s+=(j*j);
    n=n/10; 
  }
  n=s;
  }
  
  if(s==1)
 printf("True");
 else
 printf("False");
}