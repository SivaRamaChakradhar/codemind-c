#include<stdio.h>
int main()
{
    int n,m,c=0,d=0,e=0,i,j;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       if(a[i]>m)
       {
           e++;
           continue;
       }
       if(e==2)
       {
           break;
       }
       d++;
    }
    printf("%d",d);
}