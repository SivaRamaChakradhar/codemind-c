#include<stdio.h>
int main()
{
    int a=0,b=1,i=1,j=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",a);
        a=b;
        b=j;
        j=a+b;
        i++;
    }
}